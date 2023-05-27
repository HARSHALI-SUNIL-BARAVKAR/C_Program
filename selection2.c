#include<stdio.h>

int main()
{
int std=0;

printf("enter your standard \n");
scanf("%d",&std);

switch(std)
{

case 1:
printf("your exam time is 1PM \n");
break;

case 2:
printf("your exam time is 2PM \n");
//break;

case 3:
printf("your exam time is 3PM \n");
break;

case 4:
printf("your exam time is 4PM \n");
break;

default:
printf("Invalid statement");
}
return 0;
}