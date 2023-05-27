//accept 2 string from user and and copy 1st  string 
//into 2nd stirng (using toggle copy)


#include<stdio.h>

void strCpyrevX(char *src, char *dest)
{   
    int iLength = 0;

    while(*src != '\0')
    {
        src++;
        iLength++;
    }
    src--;

    for(;iLength != 0; iLength--)
    {
        *dest = *src;
        src--;
        dest++; 
    } 
    *dest = '\0';  

}
int main()
{
    char arr[20];
    char brr[20];
    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    strCpyrevX(arr,brr);  

    printf("String after copy is : %s\n",brr);
    return 0;
}
