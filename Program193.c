//accept 2 string from user and and copy 1st  string 
//into 2nd stirng 


#include<stdio.h>

void strncpyX(char *src, char *dest, int iLength)
{
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
    
    strncpyX(arr,brr,iNo);  

    printf("String after concatination is : %s\n",brr);
    return 0;
}

