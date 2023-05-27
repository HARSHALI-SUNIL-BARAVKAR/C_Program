// Write a program which accepts the marks and display the class accordingly.
//0-34  Fail
//35-49 Pass class
//50-59 Second Class
//60-74 First Class
//75-100 First Class with Destinction

#include<stdio.h>   //for printf and scanf

void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) ||(fMarks > 100.00f))  //filter
    {
        printf("Invalid Input\n");
        printf("Please enter the marks in between the range of 0 to 100");
        return;
    }

    if((fMarks>=0.0f) && (fMarks < 35.00f))
    {
        printf("You are fail\n");
    }
    else if((fMarks>=35.00f) && (fMarks< 50.00f))
    {
        printf("You got pass class \n");
    }
    else if((fMarks>=50.00f)&&(fMarks<60.00f))
    {
        printf("You got second class \n ");
    }
    else if((fMarks>=60.00f)&&(fMarks<75.00f))
    {
        printf("You got First class");
    }
    else if((fMarks>=75.00f)&&(fMarks<100.00f))
    {
        printf("You got First class with Destinction");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage out of 100 \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);
    return 0;
} 



