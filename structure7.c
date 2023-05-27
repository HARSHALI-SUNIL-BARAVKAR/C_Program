#include<stdio.h>
//NESTED STRUCTURE
struct Demo
{
    int i;
    float f;
 
};

struct Hello
{
    int no;
    int x;
    struct Demo dobj;
     
};


int main()
{
struct Hello hobj;

 return 0;
}