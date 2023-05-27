// Write a program which checks whether the number is divisble by 3 and 5.
#include<stdio.h>   //for printf and scanf
#include<stdbool.h>  //for bool data type

///////////////////////////////////////////////////////////////////////////
//
// Function name :      CheckDivisible
// Input:               Integer
// Output:              Boolean
// Description:         Checks whether input is divisible by 3 and 5
// Author:              Harshali Sunil Baravkar
// Date:                25/04/2023
// Update Date:             
//
//////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
   if(((iNo % 5 )==0) &&  ((iNo % 3)==0))
   {
    return true;
   }
   else
   {
    return false;
   }
}

//////////////////////////////////////////////////////////////////////////
//Entry point function
//////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;   //variable to accept input
    bool bRet = false;  //variable to accept return value;

    printf("Please enter the number to check whether it is divisible by 3 or 5 :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);   // function call
 
    if(bRet == true)
    {
        printf("%d is Completely Divisible by 3 and 5\n", iValue);
    }
    else
    {
        printf("%d is not Completely Divisible by 3 and 5\n", iValue);
    }
    return 0;
} 



/*
    Logical operators

    1: Logical AND &&

    2: Logical OR ||

    Expression 1    Expression2         &&      ||
    true            true                1        1
    true            false               0        1
    false            true               0        0
    false            false              0        1

*/