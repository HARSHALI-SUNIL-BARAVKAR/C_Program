/*
 Steps to create the application

 Step1: Understand the problem statement
 Step2: Write the Algorithnm
 Step3: Decide the programming language
 Step4: Write the program
 Step5: Test the written program
*/

//Write a program which performs addition of two numbers
/*
    Algorithm

    START
        Accept First Number as NO1
        Accept Second Number as No2
        Create one variables as ANS
        Perform Addition of No1 and No2
        Store the addition into variable ANS
        Display the value of ANS
    STOP    
*/

///////////////////////////////////////////////////////////////
//
// Write a program which performs addition of two numbers
//
//
////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////
// 
//  Function Name : Addition
//  Input : Unsigned integer , Unsigned integer
//  Output :Unsigned integer
//  Description: Performs addition of 2 numbrs
//  Author: Harshali Sunil Baravkar
//  Date: 18/04/2023
///////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iVslue2)
{
    unsigned int iResult;
    iResult = iValue1 + iVslue2;
    return iResult;
}
////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns =0;

    printf("Enter first number :\n");
    scanf("%d",&iNo1);

    printf("Enter second number :\n");
    scanf("%d",&iNo2);

    iAns= Addition(iNo1, iNo2);

    printf("Addition is : %d",iAns);

    return 0;
}