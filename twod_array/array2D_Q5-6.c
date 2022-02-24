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
   /* Search the given element in the array and print it's position*/
    printf("Enter the element to be searched \n");
    int element;
    scanf("%d",&element);
    for(i=0; i<rows; i++){
        for(j=0;j<columns;j++) {
            if(element == twod_array[i][j]){
                printf("The element %d is found at position [%d][%d]\n",element,i,j);
            }
        }
    }
    /* Check whether the array has non zero values in a position*/
    printf("Enter the position to be checked \n");
    int position;
    scanf("%d",&position);
    if(twod_array[position][0] == 0){
        printf("The array has non zero value in the position %d\n",position);
    }
    else{
        printf("The array has zero value in the position %d\n",position);
    }
  return 0;
   }
