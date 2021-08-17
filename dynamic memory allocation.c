// read and display the integer values by allocating dynamically
// using malloc()

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n;
    int *arr;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    if(arr == NULL)
    {
        printf("\n Memory Allocation Failed.");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("\n Enter the value %d of the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n the array contains \n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",arr[i]);
    }
}
