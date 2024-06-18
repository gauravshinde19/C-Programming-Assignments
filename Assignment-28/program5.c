// Program to concat second string after first string

#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    while (*src != '\0')
    {
        src++;
    }

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("Copied string :\n%s", arr);

    return 0;
}
