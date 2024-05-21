/*
    Program to accept two numbers from user and print addition of even numbers between that range (Range should contain only positive numbers).
*/

#include <stdio.h>
#define Invalid -1;

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSumEven = 0;

    if (iStart < 0 || iEnd < 0 || iEnd < iStart)
    {
        return Invalid;
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if ((iCnt % 2) == 0)
            {
                iSumEven = iSumEven + iCnt;
            }
        }

        return iSumEven;
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

    iRet = RangeSumEven(iValue1, iValue2);

    if (iRet < 0)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition of even numbers between %d and %d :\n%d", iValue1, iValue2, iRet);
    }

    return 0;
}
