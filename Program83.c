//Accept N numers from the user and we have to find the largest number from that number
//

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];       
        }
    }
    return iMax;   
}
int main()
{
    int iSize = 0;
    int *ptr =  NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the array are\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    iRet = Maximum(ptr,iSize);
    printf("Largest element is %d",iRet);
    free(ptr);
    return 0;
}

//for this program
//best case time complexity:n
//worst case time complexity:n
//average case time copmexity:n

//for interview
//best case time complexity:is arraye not sorted then n  and if sorted then 0
//worst case time complexity:n
//average case time copmexity:n