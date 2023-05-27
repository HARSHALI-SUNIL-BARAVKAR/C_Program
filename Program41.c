//Accept 1 number from user and we have to calculate factorial of that number
//without using recursion

#include<stdio.h>
typedef unsigned long int ULONG;
ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iSum = 1;
    
    for(iCnt = iNo; iCnt>0; iCnt--)  //for(iCnt = iNo; iCnt>=1; iCnt--)
    //for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d \t",iCnt);
        iSum= iSum*iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
   ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("%d",iRet);
    return 0;
}