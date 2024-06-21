// Program to accept string from user and count number of words from that string

#include <stdio.h>
#include <stdbool.h>

int WordCount(char *str)
{
    int iCount = 0;
    bool bSpace = true;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
        {
            bSpace = true;
        }
        else if (bSpace)
        {
            iCount++;
            bSpace = false;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter a string :\n");
    scanf("%[^'\n']s", arr);

    iRet = WordCount(arr);

    printf("Number of words in the string :\n%d", iRet);

    return 0;
}
