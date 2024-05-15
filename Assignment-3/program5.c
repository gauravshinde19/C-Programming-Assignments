// Program to accept character from user and check whether that character is vowel or not

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char ch)
{
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character :\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("it is not vowel");
    }
    
    return 0;
}
