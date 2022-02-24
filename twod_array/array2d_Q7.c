#include <stdio.h>
int main(){
/* Create one more 2D array and compare the two 2D arrays for values*/

    int twod_array[10][10];
    int twod_array2[10][10];
    int i,j,rows,columns;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&columns);

    printf("Enter the elements of the 1st 2D array\n");
    for(i=0; i<rows; i++){
        for(j=0;j<columns;j++) {
            printf("Enter value for twod_array[%d][%d]:", i, j);
            scanf("%d", &twod_array[i][j]);
        }
    }

    printf("Enter the elements of 2nd 2D Array\n");
    for(i=0; i<rows; i++){
        for(j=0;j<columns;j++) {
            printf("Enter value for twod_array2[%d][%d]:", i, j);
            scanf("%d", &twod_array2[i][j]);
        }
    }

    int count = 0;
    for (i = 0; i < rows; i++)
        {
            for (j = 0; j< columns; j++)
            {
                for(int k = 0; k<rows;k++)
                {
                    for(int l = 0; l<columns;l++)
                    {
                        if (twod_array[i][j] == twod_array2[k][l])
                        {
                            printf("%d ",twod_array[i][j]);
                            count++;
                        }
                    }

                }
            }
        }
   printf("\nThe number of values same in both the arrays is %d\n",count);
}