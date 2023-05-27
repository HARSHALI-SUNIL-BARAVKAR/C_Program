//problems on n numbers
//array 
#include<stdio.h>
//#include<stdlib.h>    

//static memory allocation
int main()
{ 
    int Arr[5];
    int iCnt = 0;

    printf("enter the elemtns : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
    scanf("%d",&Arr[iCnt]);
    }

    printf("elements of array are : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
    printf("%d\n",Arr[iCnt]);
    }
     return 0;
}
