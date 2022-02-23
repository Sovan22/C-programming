#include <stdio.h>

// Insert one element into the array 
// Insert the given number of elements into the array 
int insert(int array[],int uSize,int totalS)
{
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
    return 0;
}


/* Remove one element from the array */

int delete(int array[],int *uSize,int totalS)
{
    int i,n,x;
    printf("Enter the index of element to be deleted \n");
    scanf("%d",&n);
    if (n>totalS)
    {
        printf("Out of bound\n");
        return -1;
    }
    for(i=n;i<totalS;i++)
    {
        array[i]=array[i+1];
    }
    return *uSize-1;
}

/* Search the given element in the array and print it's position*/

int linearSearch(int array[],int uSize,int val)
{
    for (int i = 0; i < uSize; i++)
    {
        if (array[i] == val)
        {
            return i;
        }
    }
    return -1;
    
}


/* Remove the duplicate elements in an array*/
int duplication(int array[],int *uSize)
{
 for (int i = 0; i < *uSize; i++)
    {
        for (int j = i+1; j < *uSize; j++)
        {
            if (array[i] == array[j])
            {
                for(int k=j;k<*uSize;k++)
                    {
                        array[k]=array[k+1];
                    }
                *uSize=*uSize-1;
            }
        }
    }
    return 0;
}

/* Find the sum of all elements in an array*/
int sum(int array[],int uSize)
{
    int sum = 0;
    for (int i = 0; i < uSize; i++)
    {
        sum += array[i];
    }
    return sum;
}

/* Check whether the array has non zero values in a position*/
int zeroCheck(int array[],int *uSize,int index)
{
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

/* Find the maximum number of elements in an array*/
int max(int array[],int uSize)
{
    int max = array[0];
    for (int i = 0; i < uSize; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

/* Find the minimum number of elements in an array*/

int min(int array[],int uSize)
{
    int min = array[0];
    for (int i = 0; i < uSize; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}


int main()
{
   /* Single Dimensional - 1D array declaration*/
   // Syntax : type array_name[array_size];
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


    insert(oned_array,uSize,50);
    delete(oned_array,&uSize,5);
    linearSearch(oned_array,uSize,50);
    duplication(oned_array,&uSize);
    printf("Enter the index of element to be checked\n");
    scanf("%d",&n);
    zeroCheck(oned_array,&uSize,n);
    max(oned_array,uSize);
    min(oned_array,uSize);


   printf("Single Dimensional array elements:\n");
      //Displaying array elements
   for(i=0; i<uSize; i++) 
   {
    printf("%d ", oned_array[i]);
   }
    return 0;
}
