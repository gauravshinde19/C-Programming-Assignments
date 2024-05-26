/*
    Program to accept number from user and display following pattern
    Input - row = 4, col = 4
    Output - A    B    C    D
             a    b    c    d
             A    B    C    D
             a    b    c    d
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char cValue = '\0';

    printf("Pattern :\n");
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, cValue = 'A'; j <= iCol; j++, cValue++)
        {
            if ((i % 2) == 0)
            {
                printf("%c\t", cValue + 32);
            }
            else
            {
                printf("%c\t", cValue);
            }
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
