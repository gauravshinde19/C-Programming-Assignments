/*
    Program to accept a string from user and copy the contents into another string by removing all extra white spaces
*/

#include <stdio.h>
#include <stdbool.h>

void StrCpyX(const char *src, char *dest)
{
    bool bSpace = false;

    while (*src != '\0')
    {
        if (*src == ' ' || *src == '\t')
        {
            if (!bSpace)
            {
                *dest = ' ';
                dest++;
                bSpace = true;
            }
        }
        else
        {
            *dest = *src;
            dest++;
            bSpace = false;
        }
        src++;
    }
    *dest = '\0'; 
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter a string :\n");
    scanf("%[^\n]s", arr);

    StrCpyX(arr, brr);

    printf("Copied string :\n%s\n", brr);

    return 0;
}
