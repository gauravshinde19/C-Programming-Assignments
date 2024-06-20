// Program to compare the two strings and check whether contents of both are equal or not

#include <stdio.h>
#include <stdbool.h>

bool StrCmpX(char *first, char *second)
{
    while ((*first != '\0') && (*second != '\0'))
    {
        if (*first != *second)
        {
            break;
        }
        else
        {
            first++;
            second++;
        }
    }

    if ((*first == '\0') && (*second == '\0'))
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
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Marvellous Infosystems";
    bool bRet = false;

    bRet = StrCmpX(arr, brr);

    if (bRet == true)
    {
        printf("Strings are identical");
    }
    else
    {
        printf("Strings are diffrent");
    }

    return 0;
}
