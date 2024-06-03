// Program to accept N numbers and one another number from user and return frequency of that another number from it

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iFrequency = 0;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
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
    int iValue = 0;
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

    printf("Enter the number of which you want to find frequency :\n");
    scanf("%d", &iValue);

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency of %d :\n%d", iValue, iRet);

    free(p);

    return 0;
}
