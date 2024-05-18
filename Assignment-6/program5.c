// Program to accept number from user and print table of that number in reverse order

#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Table of %d in reverse order :\n", iNo);
    for (iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}
