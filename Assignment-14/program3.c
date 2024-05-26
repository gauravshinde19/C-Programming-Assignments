/*
    Program to accept number from user and display following pattern
    Input - row = 3, col = 5
    Output - A    A    A    A    A
             B    B    B    B    B
             C    C    C    C    C
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char cValue = '\0';

    printf("Pattern :\n");
    for (i = 1, cValue = 'A'; i <= iRow; i++, cValue++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t", cValue);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
