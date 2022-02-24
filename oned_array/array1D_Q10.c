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
    int max = array[0];
    for (int i = 0; i < uSize; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("The maximum value in the array is %d\n",max);

}