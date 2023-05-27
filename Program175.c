//Accept string from user and display the count of
//
//small and capital character
#include<stdio.h>

#define ERR_NOTFOUND -1

void Frequency(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;
    while(*str != '\0')
    {
    
        if((*str>='a') && (*str<='z'))
        {
            iSmallCnt++;
        }
        else if((*str>='A') && (*str<='Z'))
        {
            iCapCnt++;
        }
        str++;
    }
    printf("Small case characters count :%d\n",iSmallCnt);
    printf("Capital case characters count %d\n",iCapCnt);

}
int main()
{
    char arr[20];
   
    printf("enter sting\n");
    scanf("%[^'\n]s",arr);
    
    Frequency(arr); 
    return 0;
}