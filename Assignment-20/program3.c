// Program to accept N numbers from user and check whether that number contains 11 in it or not

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool Frequency(int Arr[], int iLength)
{
    int i = 0;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    bool bRet = 0;

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

    bRet = Frequency(p, iSize);

    if (bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    return 0;
}
