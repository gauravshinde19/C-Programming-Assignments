// Program to accept string from user and return length of largest word

#include <stdio.h>
#include <stdbool.h>

int LargestWordLength(char *str)
{
    int maxLength = 0;
    int currentLength = 0;
    bool bSpace = true;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
        {
            bSpace = true;
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
            currentLength = 0;
        }
        else if (bSpace)
        {
            bSpace = false;
            currentLength = 1;
        }
        else
        {
            currentLength++;
        }
        str++;
    }

    if (currentLength > maxLength)
    {
        maxLength = currentLength;
    }

    return maxLength;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter a string :\n");
    scanf("%[^'\n']s", arr);

    iRet = LargestWordLength(arr);

    printf("Length of the largest word in the string :\n%d", iRet);

    return 0;
}
