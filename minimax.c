#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],i,n,min,max;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    min=max=arr[0];
    for(i=1; i<n; i++)
    {
        if(min>arr[i])
        min=arr[i];
         if(max<arr[i])
         max=arr[i];
        
    }
    printf("minimum of array is : %d",min);
           printf("\n maximum of array is : %d",max);
           return 0;
}
