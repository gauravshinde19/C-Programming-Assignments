// Program to copy the contents of first sring into another string by toggling case of all characters

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
        }
        else if ((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;
        }
        *dest = *src;
        dest++;

        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyX(arr, brr);

    printf("Copied string :\n%s", brr);

    return 0;
}
