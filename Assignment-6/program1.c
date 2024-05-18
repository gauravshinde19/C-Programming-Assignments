/*
    Write a program which accepts number from user, if number is less than 50 then print small, if it is greater than 50 and less than 100 then print mediusm, if it is greater than 100 then print large
*/

#include <stdio.h>

void Number(int iNo)
{
    int iCnt = 0;

    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if ((iNo > 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else if (iNo > 100)
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
