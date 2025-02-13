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
} 

expression: This is the variable or value you want to evaluate.
case: Each case represents a possible value for the expression. If the expression matches a case, the corresponding block of code runs.
break: This is used to exit the switch statement once a case is executed. Without break, the program will continue executing the subsequent cases (this is called “fall through”).
default: This block of code is executed if none of the case values match the expression.*/