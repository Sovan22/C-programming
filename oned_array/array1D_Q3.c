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
    printf("The array after removing duplicates is:\n");

    //check for duplication
    for (int i = 0; i < uSize; i++)
    {
        for (int j = i+1; j < uSize; j++)
        {
            if (array[i] == array[j])
            {
                for(int k=j;k<uSize;k++)
                    {
                        array[k]=array[k+1];
                    }
                uSize=uSize-1;
            }
        }
    }
    
    //displaying array after removing duplicate elements

    for(int i=0;i<uSize;i++)
    {
        printf("%d ",array[i]);
    }
}