/*
    Program to accept number from user and display its even factorial
    Input - 5
    Output - 8 (4 * 2)
*/

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    return iEvenFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of %d :\n%d", iValue, iRet);

    return 0;
}
