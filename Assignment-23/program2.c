// Program to accept character from user and check whether is it capital or not using ascii values

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;

    if ((ch >= 65) && (ch <= 90))
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

    bRet = ChkCapital(cValue);

    if (bRet == true)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not capital character");
    }

    return 0;
}
