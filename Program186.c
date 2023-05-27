//accept 2 string from user and and copy 1st  string 
//into 2nd stirng (using toggle copy)


#include<stdio.h>

void strCpytoggleX(char *src, char *dest)
{
   
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;                    
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;              
        }
        else
        {
            *dest = *src;         
        }
        dest++;
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
    
    strCpytoggleX(arr,brr);  

    printf("String after copy is : %s\n",brr);
    return 0;
}
