#include<stdio.h>
#include<stdlib.h>

int main()
{
     int Arr[10]; // Static memory allocation
   
    int size;
    int *ptr = NULL; // knife example tochu naye
 printf("Enter the size of Array \n");
    scanf("%d",&size);
   
    // Step1 : allocate the memory
    ptr = (int *) malloc(sizeof(int) * 5); //malloc will allocate 20 bytes 

    // Step2 : Use the memory (In logic building batch)
    
    ptr=(int*) realloc(ptr, sizeof(int) * 7); // 28 bytes
    //  ptr=(int*) realloc(ptr, sizeof(int) * 3); // 12 bytes
   
   printf("Size of Array is %d :\n", &ptr);
    // Step3 : Deallocate the memory
    free(ptr);
    return 0;
}
