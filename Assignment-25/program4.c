
// Program to accept string from the user and check whether is it vowel or not

#include <stdio.h>
#include <stdbool.h>

bool ChkVowel(char *str)
{
    bool bRet = false;

    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            bRet = true;
            break;
        }
        str++;
    }

    return bRet;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    bRet = ChkVowel(Arr);

    if (bRet == true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
