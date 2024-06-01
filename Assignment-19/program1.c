// Program to accept N numbers from user and return the difference between the summation of even elements and odd elements

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDif = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[i];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[i];
        }
    }

    iDif = iSumEven - iSumOdd;

    return iDif;
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements that you want : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference between the summation of even elements and odd elements :\n%d", iRet);

    free(p);

    return 0;
}
