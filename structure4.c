#include<stdio.h>

//array inside the structure

struct Demo
{
    int i;
    float f;
    int arr[4];
};

int main()
{
struct Demo obj;
obj.i = 10;
obj.f = 90.9;

obj.arr[0] = 51;
obj.arr[1] = 78;
obj.arr[2] = 99;
obj.arr[3] = 89;


prinft("%d\n", obj.i);
prinft("%f\n", obj.f);
prinft("%d\n", obj.arr[2]);
prinft("%d\n", obj.arr[1]);  
 
 return 0;
}