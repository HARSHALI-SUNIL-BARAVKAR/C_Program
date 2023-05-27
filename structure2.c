#include<stdio.h>
//pointer to structures
struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
struct Demo obj1  = {11,90.90,51};
struct Demo * ptr = &obj1;

obj1.i = 11;
obj1.f = 90.9;
obj1.j = 21;
    
printf("%d\n", ptr->i);
printf("%f\n", ptr->f);
printf("%d\n", ptr->j);  
 
 return 0;
}