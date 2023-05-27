/*
INPUT:
ROW:5
COL:5

OUTPUT:
$   $   $   $   $
$   *           $
$       *       $
$           *   $
$   $   $   $   $
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
     if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }
   
    int i = 0, j = 0;
    
    for(i=1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            if((i==1) || (i==iRow) || (j==1) || (j==iCol) )
            {
                printf("$\t");
            }
            
            else if(i==j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
       
        printf("\n");
        printf("\n");
    }
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);
 
    printf("Enter number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    
    return 0;
}