//accept elements and find avegrage

#include<stdio.h>
#include<stdlib.h>
int Average(int Arr[], int iLength)
{
    int iCnt = 0;
    
    int iSum = 0;

    for(iCnt = 0; iCnt< iLength; iCnt++)
    { 
        iSum = iSum + Arr[iCnt];
    }
    return (float) iSum/ (float) iLength;
    
}

int main()    //entry point function
{
    int iSize = 0;  //to store size of array
    int *ptr = NULL;  // to store address of array
    int iCnt = 0;  //loop counter
    float fRet = 0.0f;
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
    fRet =Average(ptr,iSize);   //Demo(400,4)
    printf("Average is %f\n",fRet);
    //Step 6 : Deallocate the memory of array
    free(ptr);

    return 0; //retrun success to OS
}


//time complexity n