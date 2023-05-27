#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[10]; // Static memory allocation
    
    int size = 0;
    int *ptr = NULL; // knife example tochu naye

    printf("Enter the size of Array \n");
    scanf("%d",&size);
    // Step1 : allocate the memory
    ptr = (int *) calloc(sizeof(int),  size); 
    
    // Step2 : Use the memory (In logic building batch)
    
    // Step3 : Deallocate the memory
    free(ptr);
    return 0;
}
