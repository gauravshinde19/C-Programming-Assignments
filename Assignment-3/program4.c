// Program to accept character from user and convert case of that character

#include <stdio.h>

void DisplayConvert(char CValue)
{
    printf("After changing the case of character :\n");
    if (CValue >= 65 && CValue <= 90)
    {
        printf("%c", CValue + 32);
    }
    else
    {
        printf("%c", CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
