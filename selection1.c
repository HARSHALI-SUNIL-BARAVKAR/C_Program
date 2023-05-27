#include<stdio.h>

int main()
{
int  no=0;

printf("enter the number\n");
scanf("%d",&no);

if((no%2)==0)
{
    printf("the number is even");

}   
else
{
    printf("the number is odd");
} 

return 0;
}