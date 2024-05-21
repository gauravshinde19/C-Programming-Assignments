/*
    Program to accept two numbers from user and print numbers between that range
*/

#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Numbers between the range :\n");
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\n", iCnt);
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}
