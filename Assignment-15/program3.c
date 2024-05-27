/*
    Program to accept number from user and display following pattern
    Input - row = 4, col = 4
    Output - a    b    c    d
             1    2    3    4
             a    b    c    d
             1    2    3    4
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
        for (j = 1, cValue = 'a'; j <= iCol; j++, cValue++)
        {
            if ((i % 2) != 0)
            {
                printf("%c\t", cValue);
            }
            else
            {
                printf("%d\t", j);
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
