// Program to accept N numbers from user and display summation of digits of each number

#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iDigitSum = 0;

    printf("Summation of digits :\n");
    for (i = 0; i < iLength; i++)
    {
        iTemp = Arr[i];
        while (Arr[i] != 0)
        {
            iDigit = Arr[i] % 10;
            iDigitSum = iDigitSum + iDigit;
            Arr[i] = Arr[i] / 10;
        }
        printf("Sum of digits of the number %d is %d\n", iTemp, iDigitSum);
        iDigitSum = 0;
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

    DigitsSum(p, iSize);

    free(p);

    return 0;
}
