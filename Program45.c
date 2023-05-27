//Accept 1 number from user and we have to calculate factorial of that number
//without using recursion

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    iCnt = 1;
    while(iCnt<=iNo)
    {
        printf("%d \t",iCnt);
        iSum= iSum*iCnt;
        iCnt++;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("%d",iRet);
    return 0;
}