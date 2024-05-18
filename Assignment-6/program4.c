// Program to accept number from user and print table of that number

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Table of %d :\n", iNo);
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
