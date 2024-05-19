/*
    Program to accept number from user and display its odd factorial
    Input - 5
    Output - 15 (5 * 3 * 1)
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of %d :\n%d", iValue, iRet);

    return 0;
}
