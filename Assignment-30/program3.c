// Program to compare first N characters of the two strings and check whether contents of both are equal or not

#include <stdio.h>
#include <stdbool.h>

bool StrCmpX(char *first, char *second, int iNo)
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        if (*first != *second)
        {
            return false;
        }

        if (*first == '\0' || *second == '\0')
        {
            break;
        }

        first++;
        second++;
        iCnt++;
    }

    return true;
}

int main()
{
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Marvellous Infosystems";
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number of characters you want to compare :\n");
    scanf("%d", &iValue);

    bRet = StrCmpX(arr, brr, iValue);

    if (bRet == true)
    {
        printf("First %d characters of Strings are identical", iValue);
    }
    else
    {
        printf("First %d characters of Strings are diffrent", iValue);
    }

    return 0;
}
