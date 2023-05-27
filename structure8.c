#include<stdio.h>
//toothpaste and free brush exemple 

struct Hello
{
    int no;
    int x;
    struct Demo
    {
    int i;
    float f;
 
    }dobj;
     
};


int main()
{
struct Hello hobj;

hobj.no=10;
hobj.x=20;
hobj.dobj.i=30;
hobj.dobj.f=40.0;

 return 0;
}