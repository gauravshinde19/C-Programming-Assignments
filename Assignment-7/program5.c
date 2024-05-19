/*
    Program to accept number from user and display difference between its odd factorial and even factorial
    Input - 5
    Output - -10 (5 - 15)
*/

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iFactDiff = 0;

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
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iFactDiff = iEvenFact - iOddFact;

    return iFactDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference of even & odd factorial of %d :\n%d", iValue, iRet);

    return 0;
}
