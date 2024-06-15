// Program to accept string and one character from user and find last occurrence of that character

#include <stdio.h>
#include <stdbool.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }

    return iPos;
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    if (iRet != -1)
    {
        printf("Charater is present at index :\n%d", iRet);
    }
    else
    {
        printf("Charater is not present");
    }

    return 0;
}