//accept string from user and replace every capital letter
// from string with * and small with $


#include<stdio.h>

void EditString(char *str)
{
    while(*str != '\0')
    {
        if((*str >='A')&&(*str<='Z'))
        {
            *str = '*';
        }
        else if((*str >='a')&&(*str<='z'))
        {
            *str = '$';
        }
        str++;
    }    
}
int main()
{
    char arr[20];
   
    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    EditString(arr);  //arr is call by address

    printf("String after editing is \n %s\n",arr);
    return 0;
}
