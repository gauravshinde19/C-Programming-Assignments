/*
    Program to accept two numbers from user and print addition of numbers between that range (Range should contain only positive numbers).
*/

#include <stdio.h>
#define Invalid -1;

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart < 0 || iEnd < 0 || iEnd < iStart)
    {
        return Invalid;
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        return iSum;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point :\n");
    scanf("%d", &iValue1);

    printf("Enter ending point :\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet < 0)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition of numbers between %d and %d :\n%d", iValue1, iValue2, iRet);
    }

    return 0;
}
