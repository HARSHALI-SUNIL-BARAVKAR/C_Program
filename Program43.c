//Accept 1 number from user and we have to calculate factorial of that number
//without using recursion

#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt<= iNo)
    {
        printf("%d \t",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayF(iValue);
    return 0;
}