#include <stdio.h>
int main(){
char array[50];
char array2[50];
int uSize1 = 0,uSize2= 0, count = 0;
printf("Enter size of 1st character array \n");
scanf("%d",&uSize1);
printf("Enter the 1st array characters \n");
for (int i = 0; i< uSize1; i++)
{
scanf("%s",&array[i]);
}
printf("Enter size of 2nd character array \n");
scanf("%d",&uSize2);
printf("Enter the 2nd array characters \n");
for (int i = 0; i< uSize2; i++)
{
scanf("%s",&array2[i]);
}
/* Create one more 1D character array and compare the two 1D character arrays for values*/

  for (int i = 0; i < uSize1; i++)
    {
        for (int j = 0; j< uSize2; j++)
            if (array[i] == array2[j])
            {
                printf("%c ",array[i]);
                count++;
            }
    }
printf("\nThe number of elements that are same in both arrays are %d\n",count);
//display the array
return 0;
}