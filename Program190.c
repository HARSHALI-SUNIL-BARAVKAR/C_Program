//accept 2 string from user and and copy 1st  string 
//into 2nd stirng at the end (using concatination)


#include<stdio.h>
//1 : travel till end of dest
//2 : copy the data from src to dest
//3 : write '\0' at the end of dest

void strcatX(char *src, char *dest)
{  
    //1 : travel till end of dest
    while(*dest != '\0')
    {
        dest++;
    }

    *dest = ' ';
    dest++;
    
    //2 : copy the data from src to dest
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
    char brr[20] = "Demo";
    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    strcatX(arr,brr);  

    printf("String after copy is : %s\n",brr);
    return 0;
}
