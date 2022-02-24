#include<stdio.h>
int main()
{
  int array[50];
  
  int i,n,x;
    printf("Enter the number of elements to be inserted \n");
    scanf("%d",&n);
    if (n>totalS - uSize)
    {
        printf("The array is full \n");
        return -1;
    }
    printf("Enter the elements \n");
    for(i=uSize;i<uSize+n;i++)
    {
        scanf("%d",&x);
        array[i]=x;
    }
}
