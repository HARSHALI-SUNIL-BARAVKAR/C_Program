//accept 2 string from user and and copy 1st  string 
//concate the content of 1 st string at the end of 2nd sting specified letters


#include<stdio.h>

void strncatX(char *src, char *dest, int iLength)
{  
    //1 : travel till end of dest
    while(*dest != '\0')
    {
        dest++;
    }

    //2 : copy the data from src to dest
    while((*src != '\0')&&(iLength != 0))
    {
        *dest = *src;
        src++;
        dest++;

        iLength--;
        
    }

    *dest = '\0';    
}

int main()
{
    char arr[20];
    char brr[20] = "Demo";
    int iNo = 0;

    printf("enter sting\n");
    scanf("%[^'\n]s",arr);

    printf("enter the number of letters that you want to conecate\n");
    scanf("%d",&iNo);
    
    strncatX(arr,brr,iNo);  

    printf("String after concatination is : %s\n",brr);
    return 0;
}
