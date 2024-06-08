// Program to accept N numbers from user and return the smallest number

#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int i = 0;
    int iMin = Arr[0];

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMin;
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

    iRet = Minimum(p, iSize);

    printf("Smallest number :\n%d", iRet);

    free(p);

    return 0;
}
