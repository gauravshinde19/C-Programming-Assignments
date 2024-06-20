// Program to check whether the string is palindrome or not

#include <stdio.h>
#include <stdbool.h>

bool StrPal(char *str, int iLength)
{
    int start = 0;
    int end = iLength - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    char arr[30] = "Marvellous";
    int iValue = 0;

    int iSize = 0;
    while (arr[iSize] != '\0')
    {
        iSize++;
    }

    bool bRet = StrPal(arr, iSize);

    if (bRet == true)
    {
        printf("String is a palindrome\n");
    }
    else
    {
        printf("String is not a palindrome\n");
    }

    return 0;
}
