/*
    Program to accept number from user and display following pattern
    Input - row = 4, col = 4
    Output - 2    4    6    8
             1    3    5    7
             2    4    6    8
             1    3    5    7
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    printf("Pattern :\n");
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if ((i % 2) == 0)
            {
                printf("%d\t", 2 * j);
            }
            else
            {
                printf("%d\t", 2 * j - 1);
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
