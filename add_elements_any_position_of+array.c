// 7. Declare an Array, take Size, Elements dynamically. Insert an
//    element at any position of the array. [Take the elements & position dynamically]

#include <stdio.h>

int main()
{
    int size;
    
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
    int pos, newElement;
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    if (pos < 1 || pos >= nofElements)
    {
        printf("Error: Invalid position.\n");
        return 1;
    }
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