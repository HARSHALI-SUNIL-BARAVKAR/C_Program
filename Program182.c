//accept string from user and toggle every small case letter
// convert it into capital case and capital to small 


#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        int Gap = 'a'- 'A';
        if((*str >='a')&&(*str<='z'))
        {
            *str = *str-Gap;
        }
        else if((*str >='A')&&(*str<='Z'))
        {
            *str = *str+Gap;
        }
        
        str++;
    }    
}
int main()
{
    char arr[20];
   
    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    strtoggleX(arr);  //arr is call by address

    printf("String after editing is \n %s\n",arr);
    return 0;
}
