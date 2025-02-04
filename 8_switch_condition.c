#include <stdio.h>

int main(){
    // Switch variable
    int var ;
    
    printf("enter the value of var:",var);
    scanf("%d", &var);

    // Switch statement
    switch (var) {
    case 1:
        printf("Case 1 is Matched.");
        break;

    case 2:
        printf("Case 2 is Matched.");
        break;

    case 3:
        printf("Case 3 is Matched.");
        break;

    default:
        printf("Default case is Matched.");
        break;
    return 0;
    }
}

/* switch (expression) {
    case value1:
        // Code_block1
        break;
    case value2:
        // Code_block2
        break;
    default:
        // Default_code_block
} */