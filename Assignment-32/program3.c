/*
    Program to accept string and display following pattern
    Input : PPA
    Output :
    P    
    P  P  
    P  P  A
*/
#include <stdio.h>

void Pattern(const char *str)
{
    int iLength = 0;
    const char *iTemp = str;

    while (*iTemp != '\0')
    {
        iLength++;
        iTemp++;
    }

    printf("Pattern :\n");
    for (int i = 0; i < iLength; i++)
    {
        for (int j = 0; j < iLength; j++)
        {
            if (i >= j)
            {
                printf("%c  ", str[j]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}

int main()
{
    char arr[50];

    printf("Enter a string :\n");
    scanf("%s", arr);

    Pattern(arr);

    return 0;
}
