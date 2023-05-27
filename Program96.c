//  INPUT : 7
//  OUTPUT :    A   A   A   A   A   A   A

#include<stdio.h>

void Display(int iNo)
{
    int iCnt;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("A\t");
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