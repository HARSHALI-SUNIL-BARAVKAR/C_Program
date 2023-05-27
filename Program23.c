//Accept the number from  user and find the factor of that number

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt < iNo; iCnt++)  //O(N), we remove = sign so number itself will not display
    {
      if((iNo % iCnt) ==0)
      {
        printf("%d\n",iCnt);
      }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}

//Time complexity : O(N)
// where N is the input (natural numbers)