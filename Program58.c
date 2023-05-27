//Accept number from user and count the frequency of 8

#include<stdio.h>

int CountDigitFrequency(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo<0) // updater
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
        
    }
 return iCnt;  
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet= CountDigitFrequency(iValue);

    printf("Frequency of  8 is :%d\n",iRet);
    

    return 0;
}