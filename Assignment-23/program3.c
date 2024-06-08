// Program to accept character from user and check whether is it digit or not using ascii values (0-9)

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;

    if ((ch >= 48) && (ch <= 57))
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
        printf("It is digit");
    }
    else
    {
        printf("It is not digit");
    }

    return 0;
}
