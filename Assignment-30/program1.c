// Program to accept number of characters from user and concat that number of characters of second string after first string

#include <stdio.h>

void StrNCatX(char *src, char *dest, int iNo)
{
    int iCnt = 0;

    while (*src != '\0')
    {
        src++;
    }

    while (iCnt != iNo)
    {
        *src = *dest;
        dest++;

        src++;
        iCnt++;
    }
    *src = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
    int iValue = 0;

    printf("Enter the number of characters :\n");
    scanf("%d", &iValue);

    StrNCatX(arr, brr, iValue);

    printf("Copied string :\n%s", arr);

    return 0;
}
