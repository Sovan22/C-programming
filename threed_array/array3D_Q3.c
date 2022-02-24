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

   /* Remove the given number of elements into the specified position of 
the array such as first, last, mid*/
    printf("Enter the number of elements to be removed\n");
    int num_elements;
    int choice;
    scanf("%d",&num_elements);
    if (num_elements>9) {
        printf("Number of elements cannot be more than 4\n");
        return -1;
        }
    else
    {   
        printf("Place to remove the elements from\n");
        printf("1. First\n");
        printf("2. Middle\n");
        printf("3. Last\n");
        scanf("%d",&choice);
        if (choice==1) {
            
                for (j=0; j<2; j++) {
                    for (k=0; k<2; k++) {
                        if(num_elements==0) {
                            break;
                        }
                        printf("Enter value for threed_array[%d][%d][%d]:", choice-1, j, k);
                        threed_array[choice-1][j][k] = 0;
                        num_elements--;
                        
                    }
                }
            
        }
        else if (choice==2) {
            for (j=0; j<2; j++) {
                    for (k=0; k<2; k++) {
                        if(num_elements==0) {
                            break;
                        }
                        printf("Enter value for threed_array[%d][%d][%d]:", choice-1, j, k);
                        threed_array[choice-1][j][k] = 0;
                        num_elements--;
                        
                    }
                }
        }
        else if (choice==3) {
            for (j=0; j<2; j++) {
                    for (k=0; k<2; k++) {
                        if(num_elements==0) {
                            break;
                        }
                        printf("Enter value for threed_array[%d][%d][%d]:", choice-1, j, k);
                        threed_array[choice-1][j][k] = 0;
                        num_elements--;
                        
                    }
                }
        }
        else {
            printf("Invalid choice\n");
            return-1;
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
      
   
   return 0;
}