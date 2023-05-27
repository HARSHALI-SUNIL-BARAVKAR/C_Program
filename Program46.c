//Accept 2 numbers from user as x and y and output should be x^y

#include<stdio.h>

int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    int iResult = 1;
    
    iCnt = 1;
    while( iCnt<= iPower)
    {
        iResult = iResult * iBase;
        iCnt++;
    }    
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter base\n");
    scanf("%d",&iValue1);

    printf("Enter power\n");
    scanf("%d",&iValue2);

    iRet = CalculatePower(iValue1,iValue2);

        printf("result is %d:",iRet);
    return 0;
}


//time complexity is n that is value of power