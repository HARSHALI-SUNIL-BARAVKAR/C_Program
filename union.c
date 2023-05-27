#include<stdio.h>
    union Demo
    {
        int no;
        double d;
        float f;
        int no1;
    };


int main()
{
  union Demo obj;

printf("%d\n", sizeof(obj));

obj.no = 11;
printf("%d\n",obj.no); //11

obj.f = 90.99;
printf("%f\n",obj.f); //90.99

obj.no1 = 12;
printf("%d\n",obj.no1); //12

 return 0;

}