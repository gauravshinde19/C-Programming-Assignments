// Program to accept N numbers from user and return frequency of even numbers

#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int i = 0;
    int iFrequency = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 2) == 0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
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

    iRet = CountEven(p, iSize);

    printf("Frequency of even elements :\n%d", iRet);

    free(p);

    return 0;
}
