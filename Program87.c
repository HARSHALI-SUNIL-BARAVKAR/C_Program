//Accept N number from user as well as accept one another NO number
//check whether that No is present in that N numbers or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//time complexity n

bool Search(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            bFlag = true;
           break;
        }
    }
    
        return bFlag;
    
}

int main()
{
    int iSize = 0, iValue = 0;
    int *ptr =  NULL;
    int iCnt = 0;
    bool bRet =false;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search \n");
    scanf("%d",&iValue);

    printf("Elements of the array are\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    bRet=Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("%d is present in the array \n",iValue);
    }
    else
    {
        printf("%d is not present in the array \n",iValue);
    }
    free(ptr);
    return 0;
}
