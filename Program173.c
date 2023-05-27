//Accept string from user and accept one character and return the 
//first occurence of that string

//without using break keyword

#include<stdio.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

int FirstOccurence(char *str, char cValue)
{
    int iCnt =1;
    
    while((*str != '\0')&& (*str != cValue))
    {
        str++;
        iCnt++;
    }

    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
    
}

int main()
{
    char arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    fflush(stdin);

    printf("enter character\n");
    scanf("%c",&ch);

    iRet=FirstOccurence(arr,ch);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such a character \n");
    }
    else
    {
    printf("first occuren e of that character is at : %d\n",iRet);
    }
    return 0;
}