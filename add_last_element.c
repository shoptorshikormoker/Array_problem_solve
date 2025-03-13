#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    int nOfelement;
    printf("\nEnter the number of element you want:\n");
    scanf("%d", &nOfelement);
    if (nOfelement > size)
    {
        printf("Size exceeds the limit!\n");
        return 1;
    }
    printf("\nInput array elements:");
    for (int i = 0; i < nOfelement; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements befor adding new element: ");
    for (int i = 0; i < nOfelement; i++)
    {
        printf("%d ", arr[i]);
    }
    if (nOfelement >= size)
    {
       printf("\nArray if full");
       return 1;
    }
    int newElement;
    printf("\nEnter the new element: ");
    scanf("%d", &newElement);
    arr[nOfelement] = newElement;

   
    printf("\nArray elements after adding new element: ");
    for (int i = 0; i <= nOfelement; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}