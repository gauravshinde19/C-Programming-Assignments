// Program to accept string and one character from user and find first occurrence of that character

#include <stdio.h>
#include <stdbool.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    bool bFlag = false;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }

    if (bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
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