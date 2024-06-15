// Program to accept string and one character from user and check whether that character is present in string or not

#include <stdio.h>
#include <stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    printf("Enter the character that you want to serach :\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if (bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}