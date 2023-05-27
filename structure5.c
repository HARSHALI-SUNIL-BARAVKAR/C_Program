#include<stdio.h>

//ARRAY OF STRUCTURE OBJECT

struct Demo
{
    int i;
    float f;
  
};

int main()
{
struct Demo arr[4];

arr[0].i = 11;
arr[0].f = 12.51;

arr[1].i = 21;
arr[1].f = 13.51;

arr[2].i = 31;
arr[2].f = 14.51;

arr[3].i = 51;
arr[3].f = 15.51;

printf("%d\n", arr[0].i);
printf("%d\n", arr[2].i);
printf("%f\n", arr[3].f);
printf("%f\n", arr[2].f);  
 
 return 0;
}