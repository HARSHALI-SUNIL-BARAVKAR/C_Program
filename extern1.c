#include<stdio.h>

int A=10;
int B;

extern int C;

int main()
{
printf("%d\n", A);
printf("%d\n", B);
printf("%d\n", C);

    return 0;
}