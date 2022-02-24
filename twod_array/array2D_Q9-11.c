#include<stdio.h>
int main()
{
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
  
/* Find the sum of all elements in an array*/
int sum = 0;
for(i=0; i<rows; i++){
    for(j=0;j<columns;j++) {
        sum = sum + twod_array[i][j];
    }
}
printf("The sum of all elements in the array is %d\n",sum);
/* Find the maximum elements in an array*/
int max = twod_array[0][0];
for(i=0; i<rows; i++){
    for(j=0;j<columns;j++) {
        if(twod_array[i][j] > max){
            max = twod_array[i][j];
        }
    }
}
printf("The maximum element in the array is %d\n",max);
/* Find the minimum elements in an array*/
int min = twod_array[0][0];
for(i=0; i<rows; i++){
    for(j=0;j<columns;j++) {
        if(twod_array[i][j] < min){
            min = twod_array[i][j];
        }
    }
}
printf("The minimum element in the array is %d\n",min);


   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<rows; i++) {
      for(j=0;j<columns;j++) {
         printf("%d ", twod_array[i][j]);
         if(j==columns){
            printf("\n");
         }
      }
   }
   return 0;
}
