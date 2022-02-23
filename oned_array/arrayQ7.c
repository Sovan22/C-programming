#include <stdio.h>

int main(){
    /* Create one more 1D array and compare the two 1D arrays for values*/

    int oned_array[50],uSize1 = 0,uSize2 = 0,count = 0;
    int oned_array2[50];
    printf("Enter size of 1st array \n");
    scanf("%d",&uSize1);
    printf("Enter the 1st array elements \n");
    for (int i = 0; i< uSize1; i++)
    {
        scanf("%d",&oned_array[i]);
    }
    printf("Enter size of 2nd array \n");
    scanf("%d",&uSize2);
    printf("Enter the 2nd array elements \n");
    for (int i = 0; i< uSize2; i++)
    {
        scanf("%d",&oned_array2[i]);
    }

    // r = compareInt(oned_array,oned_array2,uSize1,uSize2);
    
    for (int i = 0; i < uSize1; i++)
        {
            for (int j = 0; j< uSize2; j++)
                if (oned_array[i] == oned_array2[j])
                {
                    printf("%d ",oned_array[i]);
                    count++;
                }
    }
    
    printf("The number of elements that are same in both arrays are %d\n",count);
}