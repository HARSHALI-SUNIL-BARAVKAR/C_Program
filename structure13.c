#include<stdio.h>
    struct Demo
    {
        int no;
        char ch;
        char ch1;
        float f;
        int i;
    };


int main()
{
  struct Demo obj;

  printf("%d\n", sizeof(obj));
 return 0;

}