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
        printf("Number of elements exceeds array size: \n");
        return 1;
    }
    printf("\nInput the array elements: ");
    for (int i = 0; i < nofElements; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &pos);
    if (pos < 0 || pos >= nofElements || pos % 2 != 0) {
        printf("Invalid position.\n");
        return 1;
    }
    for (int i = pos; i < nofElements - 1; i++) {
        arr[i]=arr[i+1];
    }
    nofElements=nofElements-1;
    printf("Array after deletion: ");
    for (int i = 0; i < nofElements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}