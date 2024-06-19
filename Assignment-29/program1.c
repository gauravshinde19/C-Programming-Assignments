// Program to copy the contents of first sring into another string in reverse order

#include <stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int iEnd = 0;

    while (*src != '\0')
    {
        iEnd++;
        src++;
    }

    src--;

    while (iEnd > 0)
    {
        *dest = *src;
        src--;
        dest++;
        iEnd--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("Copied string in reverse order :\n%s\n", brr);

    return 0;
}
