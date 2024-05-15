// Program to accept number from user and print first n even numbers

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        return;
    }

    printf("Even numbers :\n");
    for (iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
