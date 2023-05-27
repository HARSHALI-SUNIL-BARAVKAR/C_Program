
#include<stdio.h>

// example of iteration

 void Display(int iNo)
 {
     int iCnt = 0;
   
  for(iCnt= 1; iCnt<=iNo; iCnt++)
    {

        printf("Jay Ganesh...\n"); 
    }
 }

    int main()
    {
        int iValue = 0;
        printf("Enter how many times you want to display Jay Ganesh\n");
        scanf("%d",&iValue);
    
    Display(iValue);
        return 0;
    }