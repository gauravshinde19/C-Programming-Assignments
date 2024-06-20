// Program to copy the contents of first sring into another string in reverse order by toggling the case

#include <stdio.h>

void StrRevTogX(char *src, char *dest)
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
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
        }
        else if ((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;
        }
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

    StrRevTogX(arr, brr);

    printf("Copied string :\n%s\n", brr);

    return 0;
}
