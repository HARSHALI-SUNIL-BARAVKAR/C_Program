//accept string from user and count capital character
// in string 


#include<stdio.h>

int strlenCapitalX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A')&& (*str <= 'Z'))
        {
        iCount++;
        
        }
        str++;
    }   
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenCapitalX(Arr);  //strlenx(100);
    printf("Number of capital letters are : %d\n",iRet);
    
    return 0;
}