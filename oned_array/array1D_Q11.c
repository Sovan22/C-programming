#include <stdio.h>
int main(){
    int array[50];
    int uSize=0;
    
    printf("Enter the size of the array\n");
    scanf("%d",&uSize);
    printf("Enter the elements of the array\n");
    for(int i=0;i<uSize;i++)
    {
        scanf("%d",&array[i]);
    }
    int min = array[0];
    for (int i = 0; i < uSize; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }   
    printf("The minimum value in the array is %d\n",min);
}