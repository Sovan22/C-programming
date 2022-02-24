#include<stdio.h>
int main()
{    
    int threed_array[10][10][10];
    int threed_array2[10][10][10];
    int i,j,k,x,y,z;

    printf("Enter the x:\n");
    scanf("%d",&x);
    printf("Enter the y\n");
    scanf("%d",&y);
    printf("Enter the z\n");
    scanf("%d",&z);

    printf("Enter the elements of the 1st 3D array\n");
    for(i=0; i<x; i++){
        for(j=0;j<y;j++) {
            for(k=0;k<z;k++) {
                printf("Enter value for threed_array[%d][%d][%d]:", i, j, k);
                scanf("%d", &threed_array[i][j][k]);
            }
            
        }    
    }

    printf("Enter the elements of 2nd 3D Array\n");
    for(i=0; i<x; i++){
        for(j=0;j<y;j++) {
           for(k=0;k<z;k++) {
                printf("Enter value for threed_array[%d][%d][%d]:", i, j, k);
                scanf("%d", &threed_array2[i][j][k]);
            }
        }
    }

    int count = 0;
    for (i = 0; i < x; i++)
        {
            for (j = 0; j< y; j++)
            {
                for(int k = 0; k<z;k++)
                {
                    for(int l = 0; l<x;l++)
                    {
                        for(int m = 0; m<y;m++)
                        {
                            for(int n = 0; n<z;n++)
                            {
                                if (threed_array[i][j][k] == threed_array2[l][m][n])
                                {
                                    printf("%d ",threed_array[i][j][k]);
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }

   printf("\nThe number of values same in both the arrays is %d\n",count);
}
// doesnt check for duplication