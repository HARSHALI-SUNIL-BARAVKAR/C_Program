#include<stdio.h>

void demo()
{
    static int no=10;
    no++;
printf("%d\n", no);

}
int main()
{
    demo();
    demo();
    demo();
    return 0;
}