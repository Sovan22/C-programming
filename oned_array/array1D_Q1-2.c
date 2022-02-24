#include<stdio.h>
int main()
{
  int oned_array[50];
   int tSize = 50,uSize = 0;
   int i,n,r;
   printf("Enter the number of elements\n");
   scanf("%d",&uSize);
    for(i=0; i<uSize; i++) 
    {
   	    printf("Enter value for oned_array[%d]:", i);
        scanf("%d", &oned_array[i]);
    }
  int i,n;
  // Insert one element into the array 
  // Insert given number of elements into the array 
    printf("Enter the number of elements to be inserted \n");
    scanf("%d",&n);
    if (n>totalS - uSize)
    {
        printf("not enough space\n");
        return -1;
    }
    printf("Enter the elements \n");
    for(i=uSize;i<uSize+n;i++)
    {
        scanf("%d",&x);
        array[i]=x;
    }
  printf("Array elements:\n");
      //Displaying array elements
   for(i=0; i<uSize; i++) 
   {
    printf("%d ", oned_array[i]);
   }
    return 0;
 }
