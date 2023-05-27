//Accept string from user and count the number of z 


#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str, char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == cValue))
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
    char ch = '\0';
    int iRet = 0;

    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);

    printf("Enter the character : \n");
    scanf("%c",&ch);

   
    iRet = CountChar(Arr,ch);  

    printf("Number of occurances : %d\n",iRet);
    
    return 0;
}