#include<stdio.h>

int Addition( int a , int b)
{
int result;
result= a+b;
return result;

}

int main()
{
    int no1=10;
    int no2=11;
    int ans;
    ans = Addition(no1, no2);
printf("%d", ans);
    return 0;
}