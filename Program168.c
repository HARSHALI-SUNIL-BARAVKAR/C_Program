//Accept string from user and count the number of that 
//character 


#include<stdio.h>

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

    printf("Enter the character : \n");
    scanf("%c",&ch);  //solution in next program


    iRet = CountChar(Arr,ch);  

    printf("Number of occurances : %d\n",iRet);
    
    return 0;
}