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
    int oddcnt = 0, evencnt = 0;
    for (int i = 0; i < nofElements; i++) {
        if (arr[i] % 2 == 0) {
            evencnt++; 
        } else {
            oddcnt++; 
        }
    }