//accept character from user check whether that
// character is small or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <='z'))
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

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("%c is a small letter \n",bRet);
    }
    else
    {
        printf("%c is not a small letter \n",bRet);
    }
    return 0;
}