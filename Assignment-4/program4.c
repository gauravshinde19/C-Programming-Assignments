// Write a program which accepts number from user and display summation of all its non factors

# include<stdio.h>

// Time Complexity : O(N)
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of non-factors : %d", iRet);

    return 0;
}
