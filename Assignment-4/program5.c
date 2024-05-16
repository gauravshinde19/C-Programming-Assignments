// Write a program which accepts number from user and display difference between summation of all its factors and non factors

#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNon = 0;
    int iDif = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNon = iSumNon + iCnt;
        }
    }

    iDif = iSumFact - iSumNon;
    return iDif;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference between the factors and non-factors of the %d :\n%d", iValue, iRet);
}
