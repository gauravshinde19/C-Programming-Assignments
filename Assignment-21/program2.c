// Program to accept N numbers from user and one another number and return first occurrence of that number in it

#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iFirstIndex = 0;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            iFirstIndex = i;
            break;
        }
    }

    return iFirstIndex;
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

    printf("Enter the number of which you want to find first occurrence :\n");
    scanf("%d", &iValue);

    iRet = FirstOcc(p, iSize, iValue);

    printf("First occurence of %d :\n%d", iValue, iRet);

    free(p);

    return 0;
}
