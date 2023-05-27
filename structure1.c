#include<stdio.h>

//direct member accesing

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
struct Demo obj1;
struct Demo obj2;

obj1.i = 11;
obj1.f = 90.9;
obj1.j = 21;
    
obj2.i = 51;
obj2.f = 78.78;
obj2.j = 99;

printf("%d\n", obj1.i);//11
printf("%d\n", obj2.i);//51
printf("%f\n", obj1.f);//90.9
printf("%d\n", obj2.j);  //99
 
 return 0;
}