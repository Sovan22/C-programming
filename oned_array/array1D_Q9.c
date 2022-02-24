#include <stdio.h>
int main(){
    int array[50];
    int uSize=0;
    int sum = 0;
    printf("Enter the size of the array\n");
    scanf("%d",&uSize);
    printf("Enter the elements of the array\n");
    for(int i=0;i<uSize;i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < uSize; i++)
    {
        sum = sum + array[i];
    }
    printf("The sum of the array is %d\n",sum);

}