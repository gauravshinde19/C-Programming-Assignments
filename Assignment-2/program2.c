// Accept one number from user and print that number of * on screen

#include <stdio.h>

void Display(int iNo)
{
    // updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
