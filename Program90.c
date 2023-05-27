//Accept N number from user as well as accept one another NO number
//return the first occurence of that number

#include<stdio.h>
#include<stdlib.h>

//time complexity depend it may vary
//best case 1
//worst case n
int SearchFirstOcc(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            
           break;
        }
    }
    if(iCnt== iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
            
}

int main()
{
    int iSize = 0, iValue = 0;
    int *ptr =  NULL;
    int iCnt = 0,iRet = 0;
    
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
    
    iRet=SearchFirstOcc(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("there is no such element\n");
    }
    else
    {
    printf("%d is occured at %d \n",iValue,iRet);
    }
    free(ptr);
    return 0;
}
