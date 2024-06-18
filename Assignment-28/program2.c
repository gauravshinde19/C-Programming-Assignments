// Program to accept number of characters that you want to copy into another string and copy it into another string

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while ((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;

        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];
    int iValue = 0;

    printf("Enter the number of characters you want to copy :\n");
    scanf("%d", &iValue);

    StrNCpyX(arr, brr, iValue);

    printf("Copied string :\n%s", brr);

    return 0;
}
