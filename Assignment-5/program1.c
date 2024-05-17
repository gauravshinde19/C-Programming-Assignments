/*
    Program to accept number from user and print following pattern on the screen
    Input - 5
    Output - $    *    $    *    $    *    $    *    $    *
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Pattern :\n");
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
