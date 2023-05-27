//accept 2 string from user and and copy 1st  string 
//into 2nd stirng


#include<stdio.h>

void strCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
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
    
    strCpyX(arr,brr);  

    printf("String after editing is : %s\n",brr);
    return 0;
}
