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

    


    




    return 0;
}