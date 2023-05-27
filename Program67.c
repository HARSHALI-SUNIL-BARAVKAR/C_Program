//accept number from user and return smallest digit from that number
//7228

#include<stdio.h>
int MinimuDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    if(iNo < 0)  //updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit<iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    } 
    return iMin;
}

int main()
{
     int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet= MinimuDigit(iValue);
    printf("Smallest digit is %d\n",iRet);
   
    return 0;
}