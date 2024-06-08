// Program to accept character from user and check whether is it alphabet or not using ascii values

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
    bool bFlag = false;

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if (bRet == true)
    {
        printf("It is alphabet");
    }
    else
    {
        printf("It is not alphabet");
    }

    return 0;
}
