#include <stdio.h>
int main(){
    int array[50];
    int uSize=0;
    int index;
    printf("Enter the size of the array\n");
    scanf("%d",&uSize);
    printf("Enter the elements of the array\n");
    for(int i=0;i<uSize;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("The index of the array to be checked for non zero value:\n");
    scanf("%d",&index);
    if(index>=uSize)
    {
        printf("Out of bound\n");
        return -1;
    }
    if(array[index] == 0)
    {
        printf("The array has zero value in the position %d\n",index); 
    }
    else
    {
        printf("The array have non zero value in the position %d\n",index); 
    }
    return 0;
}