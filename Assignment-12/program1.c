/*
    Program to accept number from user and display following pattern
    Input - 5
    Output - A    B    C    D    E
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for (iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t", ch);
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
