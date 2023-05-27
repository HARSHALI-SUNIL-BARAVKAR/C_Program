//  INPUT : 7
//  OUTPUT : 1  2   3   4   5   6   7

#include<stdio.h>

void Display(int iNo)
{
    int iCnt;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}