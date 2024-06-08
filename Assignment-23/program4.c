// Program to accept character from user and check whether is it small case or not using ascii values

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;

    if ((ch >= 97) && (ch <= 122))
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
        printf("It is small case character");
    }
    else
    {
        printf("It is not small case character");
    }

    return 0;
}
