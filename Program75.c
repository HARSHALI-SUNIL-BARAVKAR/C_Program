
#include<stdio.h>  //IO
#include<stdlib.h> //Dynamic memory management

//void Demo(int *Arr, int iLength)
void Demo(int Arr[], int iLength)
{
    //Step 5 : Perform the operation on array
}
int main()    //entry point function
{
    int iSize = 0;  //to store size of array
    int *ptr = NULL;  // to store address of array
    int iCnt = 0;  //loop counter

    //Step1 : Accept the number of elements from user
    printf("Enter number of elements \n");
    scanf("%d",&iSize);

    //step2: Allocate memory dynamically
    ptr = (int *) malloc(iSize * sizeof(int));

    //step3: Accept the values from user
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are:\n");
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    //Step 4 : Pass the array to the function
    Demo(ptr,iSize);   //Demo(400,4)

    //Step 6 : Deallocate the memory of array
    free(ptr);

    return 0; //retrun success to OS
}