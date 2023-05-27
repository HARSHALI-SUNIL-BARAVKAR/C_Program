// Display 1 to 5 on screen

#include<stdio.h>

void Display(int iNo)
{
    if(iNo <0) // updater for negative input
    {
       iNo = -iNo;
    }
    int iCnt = 0;
    
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
  int iValue = 0;
  printf("Enter the frequency of numbers\n");
  scanf("%d",&iValue);
   Display(iValue);

    return 0;
}