#include<stdio.h>
int main(){
   /* 3D array declaration*/
   int threed_array[3][2][2];
   /*Counter variables for the loop*/
   int i, j, k ;
   for(i=0; i<3; i++) {
      for(j=0;j<2;j++) {
      	for(k=0;k<2;k++) {
		 printf("Enter value for threed_array[%d][%d][%d]:", i,j,k);
         scanf("%d", &threed_array[i][j][k]);
     	}
      }
   }

   /* Remove the given number of elements of the array */
    printf("Enter the number of elements to be removed\n");
    int num_elements;
    scanf("%d",&num_elements);
    if (num_elements>12) {
        printf("Number of elements cannot be more than 12\n");
        return -1;
        }
    else
    {   
        for (int i = 0; i < 3; i++)
        {
           for (int j = 0; j < 2; j++)
           {
                for (int k = 0; k < 2; k++)
                {
                     if (num_elements == 0)
                     {
                        break;
                     }
                    threed_array[i][j][k] = 0;
                    num_elements--;
                }
               
           }
           
        }

        
    }
    //Displaying array elements
   printf("Three Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<2;j++) {
      	for(k=0;k<2;k++) {
        if(threed_array[i][j][k]!=0) {
         printf("%d ", threed_array[i][j][k]);
        }
        else
        {
            printf(" ");
        }
        //  if(k==1){
        // 	printf("\n");
            }
        }
    printf("\n");
      }
}