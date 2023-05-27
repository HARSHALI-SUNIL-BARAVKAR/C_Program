//accept number from user and add the digits
#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    int iDigit =0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=SumDigits(iValue);
    printf("Number of digits are : %d",iRet);
    return 0;
}