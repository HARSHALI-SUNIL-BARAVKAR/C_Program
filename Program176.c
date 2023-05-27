//accpt string from user and replace every whitespace from string with underscroe

//example of plot cha compund takayla sangitla ani yeun compound kela 

#include<stdio.h>

void EditString(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_';
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
