#include<stdio.h>

// pointer inside the structure

struct Demo
{
    int i;
    int j;
    float *fp;
    int *ip;
};

int main()
{   
struct Demo obj1;
int no = 90;
float f = 90.67;

obj1.i = 11;
obj1.ip = &no;
obj1.j = 21;
obj1.fp = &f;
    

printf("%d\n", obj1.i);
printf("%d\n", *(obj1.ip));
printf("%d\n", obj1.j);
printf("%f\n", *(obj1.fp));  
 
 return 0;
}