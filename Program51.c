//accept number from user and display its digit in reverse 
#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iSum =0;
    int iCnt =0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit= iNo % 10;
        printf("%d\n",iDigit);
        iNo= iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}