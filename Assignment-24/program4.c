/*
    Program to accept character from user and check whether is it special symbol or not.
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkSpecial(char ch)
{
    bool bRet = false;

    if ((ch < '0' || ch > '9') && (ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z') && (ch != ' ') && (ch != '\t') && (ch != '\n') && (ch != '\r'))
    {
        bRet = true;
    }

    return bRet;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == true)
    {
        printf("It is a special symbol\n", cValue);
    }
    else
    {
        printf("It is not a special symbol\n", cValue);
    }

    return 0;
}
