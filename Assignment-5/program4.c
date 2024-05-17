// Program to accept number from user and print all odd numbers till that number on screen

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    printf("Odd Numbers :\n");
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d\n", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
