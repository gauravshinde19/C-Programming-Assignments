// Program to accept N numbers from user and return the difference between largest number and smallest number

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iDif = 0;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    iDif = iMax - iMin;

    return iDif;
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

    iRet = Difference(p, iSize);

    printf("Difference between largest and smallest number :\n%d", iRet);

    free(p);

    return 0;
}
