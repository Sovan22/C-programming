//Find the sum of all elements in an array
#include <stdio.h>

int main()
{
    int x,y,z;
    int i,j,k,n;
    int sum=0;
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

    //Finding sum of all elements in an array
    for(i=0;i<=x-1;i++){
        for(j=0;j<=y-1;j++){
            for(k=0;k<=z-1;k++) {
                sum=sum+arr[i][j][k];
            }
        }
    }
    printf("%d",sum);
    return 0;
    }