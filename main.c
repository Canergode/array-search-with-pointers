#include <stdio.h>
#include <stdlib.h>

// Function to search for an element using pointer arithmetic
// Returns the index if found,-1 if not found
int search(int *arr,int size,int target)
{
    int index=0;
    int *arrayEnd=arr+size-1;

    // Traverse array using pointer until element is found or end is reached
    while(arr<=arrayEnd && *arr!=target )
    {
       arr++;
       index++;
    }

    if(arr<=arrayEnd)
    {
        return index;
    }
    return -1;
}

// Function to fill array elements using pointer arithmetic
void fillArray(int *array,int size)
{
    int *arrayEnd=array+size-1;

    while(array<=arrayEnd)
    {
        scanf("%d",array++);
    }
}


int main()
{
    int array[100];
    int size,target,searchIndex;

    // Get array size from user
    printf("How many elements should the array have:\n");
    scanf("%d",&size);

    // Fill the array
    printf("Enter the array elements:\n");
    fillArray(array,size);

    // Get search target from user
    printf("Which element are you looking for:\n");
    scanf("%d",&target);

    // Search for the element
    searchIndex=search(array,size,target);

    // Print result
    if(searchIndex==-1)
    {
        printf("%d was not found in the array.",target);
    }
    else
    {
        printf("%d was found at position %d.",target,searchIndex+1);
    }

    return 0;
}
