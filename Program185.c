//accept 2 string from user and and copy 1st  string 
//into 2nd stirng (only capitalcase copy)


#include<stdio.h>

void strCpyCapX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
             dest++;
        }
        src++;
    
        
    } 
    *dest = '\0';      
}
int main()
{
    char arr[20];
    char brr[20];
    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    strCpyCapX(arr,brr);  

    printf("String after editing is : %s\n",brr);
    return 0;
}
