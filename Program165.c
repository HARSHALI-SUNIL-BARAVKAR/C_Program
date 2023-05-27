//accept string from user and return the number of vowels count
//Vowels = a e i o u    A E I O U


#include<stdio.h>

int CountVowels(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'A')|| (*str =='E')||(*str == 'I')|| (*str =='O')||(*str == 'U')||(*str == 'a')|| (*str =='e')||(*str == 'i')|| (*str =='o')||(*str == 'u'))
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

    iRet = CountVowels(Arr);  //strlenx(100);
    printf("Number of vowels are : %d\n",iRet);
    
    return 0;
}