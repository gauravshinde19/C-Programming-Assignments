/*
    Program to accept two numbers from user and print numbers between that range in reverse order
*/

#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Numbers between the range in reverse order :\n");
        for (iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d", &iValue1);

    printf("Enter ending point :\n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
