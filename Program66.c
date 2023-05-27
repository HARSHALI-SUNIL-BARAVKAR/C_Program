//accept number from user and return the average

#include<stdio.h>

int DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0, iCnt = 0;
    
    if(iNo < 0) // updater
    {
        iNo = -iNo;
    }
    while(iNo !=0 )
    {
        iDigit = iNo % 10;
        iSum =iSum + iDigit;
        iCnt++;
        iNo = iNo/10;
    }
    return (float)((float)iSum / (float)iCnt);

}

int main()
{
   int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number\n");
    scanf("%d",&iValue);

    fRet= DigitsAverage(iValue);

    printf("Average is : %f",fRet);
    return 0;
}