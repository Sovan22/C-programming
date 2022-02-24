#include <stdio.h>
int main(){
    int twod_array[50][50];
    int rows,columns;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&columns);
    printf("Enter the elements of the array\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&twod_array[i][j]);
        }
    }

/* Remove the elements from all the odd numbered position of the array*/
    for(int i=0; i<rows; i++){
        int j = 1;
        if (i%2!=0 && (rows%2!=0 || columns%2!=0))
            j=0;
        for(;j<columns;j+=2) {
            twod_array[i][j] = 0;
        }

    }
    //display after removing the elements
    printf("Two Dimensional array elements after removing the elements:\n");
    for(int i=0; i<rows; i++){
        for(int j=0;j<columns;j++) {
            if(twod_array[i][j]!=0) {
                printf("%d ", twod_array[i][j]);
            }
            else {
                printf(" ");
            }
            if(j==columns-1){
                printf("\n");
            }
        }
    }
}