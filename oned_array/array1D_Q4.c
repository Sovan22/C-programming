#include <stdio.h>
int main(){
    int array[50];
    int uSize=0;
    //taking input
    printf("Enter the size of the array\n");
    scanf("%d",&uSize);
    printf("Enter the elements of the array\n");
    for(int i=0;i<uSize;i++)
    {
        scanf("%d",&array[i]);
    }
    int i,n;
    //asking user for index of element to be deleted
    printf("Enter the index of element to be deleted \n");
    scanf("%d",&n);
    //check for out of bound
    if (n>uSize)
    {
        printf("Out of bound\n");
        return -1;
    }
    //deleting element
    for(i=n;i<uSize;i++)
    {
        array[i]=array[i+1];
    }
    uSize-=1;
    //displaying array after removing element
    printf("The array after removing element at index %d is:\n",n);
    for(int i=0;i<uSize;i++)
    {
        printf("%d ",array[i]);
    }
}