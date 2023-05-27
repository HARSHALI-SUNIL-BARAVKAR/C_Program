//accept character from user check whether that character is 
//capital or not

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if((cValue >= 65) && (cValue<=90))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("%c is a capital letter \n",bRet);
    }
    else
    {
        printf("%c is not a capital letter \n",bRet);
    }
    return 0;
}