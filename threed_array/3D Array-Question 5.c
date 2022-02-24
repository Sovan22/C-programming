//Check whether the array has non zero values in a position
#include <stdio.h>

int main()
{
    int x,y,z;
    int i,j,k,n;
    int n1,n2,n3;

    // Making a 3D array
    printf("Enter the dimensions of the 3-D Array: \n");
    scanf("%d %d %d",&x,&y,&z);

    int arr[x][y][z];

    for(i=0;i<=x-1;i++){
        for(j=0;j<=y-1;j++){
            for(k=0;k<=z-1;k++) {
                printf("Enter the value for the element (%d,%d,%d): ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    //Accepting position co-ordiantes
     printf("Enter the position that has to be checked:  ");
    scanf("%d,%d,%d",&n1,&n2,&n3);

    //Checking whether the required position has a Non-Zero value or not
    if(arr[n1][n2][n3]==0)
        printf("The position (%d,%d,%d) has a zero value",n1,n2,n3);
    else
        printf("The position (%d,%d,%d) has a non-zero value",n1,n2,n3);
    return 0;
    }