#include <stdio.h>

int main()
{
    int size,nE;
    scanf("%d",&size);

  
    int arr[size+1];
    for (int i = 0; i <size; i++)
    {
        scanf("%d",&arr[i]);
    
    }
    scanf("%d",&nE);
    arr[size]=nE;

    for (int i = 0; i <size; i++)
    {
        
        
    printf("%d\n",arr[i]);
     
    }



   
    return 0;
}