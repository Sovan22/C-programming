//Search the given element in the array and print it's position
#include <stdio.h>

int main()
{
    int x,y,z;
    int i,j,k,n;
    int num;

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

    //Accepting an input value to be searched in the 3D array
     printf("Enter the value that you want to search: ");
    scanf("%d",&num);

    //Searching for the input in the 3D array

    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            for(k=0;k<z;k++){
                if (arr[i][j][k]==num)
                    printf("The position of the given element is (%d,%d,%d)",i,j,k);

                }
            }
        }
    return 0;
    }