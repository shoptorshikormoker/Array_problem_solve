
#include <stdio.h>

int main()
{
    int size,pos;
    
    printf("Input the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int nofElements;

    printf("\nInput the number of element: ");
    scanf("%d", &nofElements);
    if (nofElements > size)
    {
        printf("Error:Number of elements cannot exceed the array size.\n");
        return 1;
    }
    printf("\nInput the array elements: ");
    for (int i = 0; i < nofElements; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (nofElements == size) {
        
        printf("Insertion is not possible! The array: ");
        for (int i = 0; i < nofElements; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 1; 
    }
    
    printf("Enter an even index: ");
    scanf("%d", &pos);
    if (pos % 2 != 0 || pos >= size || pos == 0) {
        printf("Invalid\n");
        return 1;
    }
    int newElement;
    printf("\nEnter the element to insert: ");
    scanf("%d", &newElement);
    for (int i = nofElements; i >= pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1] = newElement;
    printf("\nArray after insertion: ");
    for (int i = 0; i <=nofElements; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}