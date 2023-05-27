//accept string from user and count Digits
// in string 

#include<stdio.h>

int strlenDigitX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0')&& (*str <= '9'))
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

    iRet = strlenDigitX(Arr);  //strlenx(100);
    printf("Number of DIgits are : %d\n",iRet);
    
    return 0;
}