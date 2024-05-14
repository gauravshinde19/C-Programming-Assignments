// Accept number from user and check whether number is even or odd

#include <stdio.h>
#include <stdbool.h>

bool ChkEven(int iNo)
{

    if ((iNo % 2) == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == true)
    {
        printf("%d is Even number\n", iValue);
    }
    else
    {
        printf("%d is Odd number\n", iValue);
    }

    return 0;
}
