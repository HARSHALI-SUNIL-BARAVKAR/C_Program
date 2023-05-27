//accept string from user and replace every capital case letter
// convert it into small case 


#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >='A')&&(*str<='Z'))
        {
            *str = *str+32;
        }
        
        str++;
    }    
}
int main()
{
    char arr[20];
   
    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    strlwrX(arr);  //arr is call by address

    printf("String after editing is \n %s\n",arr);
    return 0;
}
