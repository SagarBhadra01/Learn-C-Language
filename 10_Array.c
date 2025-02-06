#include <stdio.h>

int main(){
    // array initialization using initialier list
    int arr1[5] = { 10, 20, 30, 40, 50 };

    // array initialization using initializer list without
    // specifying size
    int arr2[] = { 1, 2, 3, 4, 5 };

    //print array values
    for (int j = 0; j < 5; j++) {
    printf("%d\n", arr1[j]);
    printf("%d\n", arr2[j]);
    }

    //size of array
    printf("size of array 1: %d \n", sizeof(arr1)); //an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

    

    // C Program to create multidimensional array
    
    // creating 2d array
    int arr2d[2][2] = { 1, 2, 3, 4 };
    printf("2D Array: ");
    // printing 2d array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr2d[i][j]);
        }
    }

    // creating 3d array
    int arr3d[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    printf("\n3D Array: ");
    // printing 3d array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", arr3d[i][j][k]);
            }
        }
    }
    return 0;
}