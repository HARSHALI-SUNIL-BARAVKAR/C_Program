#include<stdio.h>

int main()
{
      int no1=0;
      int no2=0;

      printf("Enter the number1\n");
      scanf("%d",&no1);
      printf("enter the nummber2\n");
      scanf("%d",&no2);
     
if(no1<no2)
{
printf("%d is max\n",no2);

}
if(no1>no2)
{
printf("%d is max\n",no1);

}
   return 0;
}