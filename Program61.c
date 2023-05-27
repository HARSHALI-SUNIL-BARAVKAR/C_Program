//accept the number from user and count the frequency of even 
//digits

#include<stdio.h>

int CheckEvenDigit(int iNo)
{
    int iDigit=0;
    int iCnt = 0;

    
    if(iNo < 0)    //updater
    {
        iNo = -iNo;
    }

    while(iNo !=0 )
    {
        iDigit = iNo % 10;
        if((iDigit%2)==0)
        {
            iCnt++;
        }
        iNo = iNo/10;
    }

    return iCnt;
    
}


int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue1);

    iRet= CheckEvenDigit(iValue1);

    printf("the count of even digit is %d : \n",iRet);
  

 return 0;  
}