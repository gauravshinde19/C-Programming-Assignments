// Program to copy the small case characters of first sring into another string

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }

        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyX(arr, brr);

    printf("Copied string :\n%s", brr);

    return 0;
}
