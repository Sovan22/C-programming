#include <stdio.h>
int main(){
    int array[50];
    int uSize=0;
    int val;
    printf("Enter the size of the array\n");
    scanf("%d",&uSize);
    printf("Enter the elements of the array\n");
    for(int i=0;i<uSize;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The value of the array to be searched:\n");
    scanf("%d",&val);
    for (int i = 0; i < uSize; i++)
    {
        if (array[i] == val)
        {
            printf("The value %d is present at index %d\n",val,i);
        }
    }
    
}