//accept the number fromuser and count the frequency of odd digits

#include<stdio.h>

int CheckOddDigit(int iNo)
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
        //if((iDigit % 2)!=0) 
        if((iDigit % 2)==1)
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

    iRet= CheckOddDigit(iValue1);

    printf("the count of Odd digit is %d : \n",iRet);
  

 return 0;  
}