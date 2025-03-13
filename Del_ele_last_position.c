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
    if (nofElements > size) {
        printf("Error: Number of elements cannot exceed the array size.\n");
        return 1;
    }
    printf("\nInput the array elements: ");
    for (int i = 0; i < nofElements; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(nofElements==0){
        printf("Array is already empty");
        return 0;
    }
    nofElements=nofElements-1;
    for (int i = 0; i < nofElements; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}