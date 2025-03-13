/* #include <stdio.h>

int main()
{
    int i,sum=0;
    for ( i = 5; i <=20; i++)
    {
        sum=sum+i;
    
    }
    printf("%d",sum);
    
    return 0;
}
*/
/*add odd number 5 to 20*/

#include <stdio.h>

int main()
{
    int i,sum=0;
    for ( i = 5; i <=20; i++)
    {
        if(i%2==1){
        sum=sum+i;
        }
    
    }
    printf("%d",sum);
    
    return 0;
}
