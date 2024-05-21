/*
    Program to accept two numbers from user and print even numbers between that range
*/

#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Even numbers between the range :\n");
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if ((iCnt % 2) == 0)
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
