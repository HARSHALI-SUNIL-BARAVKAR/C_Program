//accept string from user and replace every small case letter
// convert it into capital case 


#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >='a')&&(*str<='z'))
        {
            *str = *str-32;
        }
        
        str++;
    }    
}
int main()
{
    char arr[20];
   
    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    struprX(arr);  //arr is call by address

    printf("String after editing is \n %s\n",arr);
    return 0;
}
