// Program to accept string and one character from user and check frequency of that character

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    iRet = CountChar(Arr, cValue);

    printf("Frequency of that character :\n%d", iRet);

    return 0;
}