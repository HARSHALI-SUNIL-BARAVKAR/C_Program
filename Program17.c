// Display 1 to 5 on screen

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<= 5; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
  // printf("\n");
   Display();

    return 0;
}