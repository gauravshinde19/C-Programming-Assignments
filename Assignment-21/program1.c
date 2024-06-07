// Program to accept N numbers from user and one another number and find that another number is present in it or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int i = 0;
    bool bFlag = false;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            bFlag = true;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

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

    printf("Enter the number of which you want to search :\n");
    scanf("%d", &iValue);

    bRet = Check(p, iSize, iValue);

    if (bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}
