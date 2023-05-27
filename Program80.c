//accept elements and count odd number

#include<stdio.h>
#include<stdlib.h>
int CountOdd(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCounter = 0 ;

    for(iCnt = 0; iCnt< iLength; iCnt++)
    { 
        if((Arr[iCnt]%2) == 1)
        iCounter++;
    }
    return iCounter;
}

int main()    //entry point function
{
    int iSize = 0;  //to store size of array
    int *ptr = NULL;  // to store address of array
    int iCnt = 0;  //loop counter
    int iRet = 0;
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
    iRet =CountOdd(ptr,iSize);   //Demo(400,4)
    printf("Odd elements are %d\n",iRet);
    //Step 6 : Deallocate the memory of array
    free(ptr);

    return 0; //retrun success to OS
}