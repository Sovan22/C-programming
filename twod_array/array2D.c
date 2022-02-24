//Q1-Q2
#include<stdio.h>

int main(){
    int twod_array[10][10];
   /*Counter variables for the loop*/
    printf("Enter the rows of the 2D array \n");
    int rows;
    scanf("%d",&rows);
    printf("Enter the columns of the 2D array \n");
    int columns;
    scanf("%d",&columns);
   int i, j;
   for(i=0; i<rows; i++){
      for(j=0;j<columns;j++) {
         printf("Enter value for twod_array[%d][%d]:", i, j);
         scanf("%d", &twod_array[i][j]);
      }
   }

    /*Insert the elements in all the odd numbered position of the array*/
    for(i=0; i<rows; i++){
        for(j=1;j<columns;j+=2) {
            printf("Enter value for twod_array[%d][%d]:", i, j);
            scanf("%d", &twod_array[i][j]);
        }
    }
    /* Insert the elements in all the even numbered position of the array*/

    for(i=0; i<rows; i++){
        for(j=0;j<columns;j+=2) {
            printf("Enter value for twod_array[%d][%d]:", i, j);
            scanf("%d", &twod_array[i][j]);
        }
    }
}
