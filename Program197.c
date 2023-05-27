//Accept 2 strings from user and compare that strings with each other

#include<stdio.h>
#include<stdbool.h>


bool strcmpX(char *str1, char *str2)
{
    for(;((*str1 != '\0') && (*str2 != '\0') &&(*str1 == *str2));)
    {
        str1++;
        str2++;
    }
    return((*str1=='\0') && (*str2=='\0'));
    
}

int main()
{
    char arr[20]; 
    char brr[20];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter second string : \n");
    scanf(" %[^'\n']s",brr);

    bRet = strcmpX(arr,brr);

    if(bRet == true)
    {
        printf("Both the strings are identical\n");
    }
    else
    {
        printf("Both the strings are different\n");
    }
    return 0;
}