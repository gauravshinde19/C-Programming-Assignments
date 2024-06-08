// Program to accept N numbers from user and display all such a numbers which contains 3 digits in it

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iCount = 0;

    printf("Numbers which contains 3 digits :\n");
    for (i = 0; i < iLength; i++)
    {
        iTemp = Arr[i];
        while (Arr[i] != 0)
        {
            iDigit = Arr[i] % 10;
            iCount++;
            Arr[i] = Arr[i] / 10;
        }
        if (iCount == 3)
        {
            printf("%d\n", iTemp);
        }
        iCount = 0;
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements :\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the %d elements :\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}
