#include<stdio.h>
int main()
{
   /* Single Dimensional - 1D array declaration*/
   // Syntax : type array_name[array_size];
   int oned_array[5];
   int array_2[6]; 
   /*Counter variables for the loop*/
   int i ;
   for(i=0; i<5; i++) 
   {
   	printf("Enter value for oned_array[%d]:", i);
    scanf("%d", &oned_array[i]);
    }

   //Displaying array elements
   printf("Single Dimensional array elements:\n");
   for(i=0; i<5; i++) 
    {
       printf("%d ", oned_array[i]);
    }
    for(i=0 ; i < 5 ; i++)
    {
        array_2[i+1] = oned_array[i];
    }

    array_2[0] = 7;

    printf("\n");

    for(i=0; i<6; i++) 
    {
    printf("%d ", array_2[i]);
	}

    return 0;
}