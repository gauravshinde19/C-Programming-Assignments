// Program to accept N numbers from user and return product of all odd elements

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iProduct = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 2) != 0)
        {
            if (i == 0)
            {
                iProduct++;
            }
            iProduct = iProduct * Arr[i];
        }
    }

    return iProduct;
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

    iRet = Product(p, iSize);

    printf("Product of odd elements :\n%d", iRet);

    free(p);

    return 0;
}
