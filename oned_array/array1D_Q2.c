#include<stdio.h>

int main()
{
    int oned_array[5];
    int i;
    int n;

    for(i=0; i<5; i++) 
    {
   	    printf("Enter value for oned_array[%d]:", i);
        scanf("%d", &oned_array[i]);
    }

    printf("Single Dimensional array elements:\n");

    for(i=0; i<5; i++) 
    {
        printf("%d ", oned_array[i]);
	}

    printf("\nno of elements added\t");
    scanf("%d",&n);
    
    int array_2[5+n];

    for(i = 0; i < 5; i++)
    {
        array_2[i+n] = oned_array[i];
    }

    for(i = 0; i < n; i++)
    {
        array_2[i] = i+6;
    }

    for(i=0; i<5+n; i++) 
    {
        printf("%d ", array_2[i]);
	}

    return 0;
}
