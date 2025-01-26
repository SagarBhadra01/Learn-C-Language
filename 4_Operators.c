#include <stdio.h>

int main(){
    int a = 25, b = 5;

    //Arithmetic Operators ->
    printf("1. a + b = %d\n", a + b);  //(plus) Adds two numeric values.	
    printf("2. a - b = %d\n", a - b);  //(Minus) Subtracts right operand from left operand.	
    printf("3. a * b = %d\n", a * b);  //(Multiply) Multiply two numeric values.	
    printf("4. a / b = %d\n", a / b);  //(Divide) Divide two numeric values.	
    printf("5. a % b = %d\n", a % b);  //(Modulus) Returns the remainder after diving the left operand with the right operand.	
    printf("6. +a = %d\n", +a);        //(Unary Plus) Used to specify the positive values.	
    printf("7. -a = %d\n", -a);        //(Unary Minus) Flips the sign of the value.	
    printf("8. ++a = %d\n", ++a);      //(Increment) Increases the value of the operand by 1.	
    printf("9. --b = %d\n", --b);      //(Decrement) Decreases the value of the operand by 1.	


    //Relational Operators ->
    printf("10. a < b  : %d\n", a < b);  //(Less than) Returns true if the left operand is less than the right operand. Else false
    printf("11. a > b  : %d\n", a > b);  //(Greater than) Returns true if the left operand is greater than the right operand. Else false
    printf("12. a <= b: %d\n", a <= b);  //(Less than Equal) Returns true if the left operand is less than or equal to the right operand. Else false
    printf("13. a >= b: %d\n", a >= b);  //(Greater than Equal) Returns true if the left operand is greater than or equal to right operand. Else false
    printf("14. a == b: %d\n", a == b);  //(Equal) Returns true if both the operands are equal.	
    printf("15. a != b : %d\n", a != b); //(Not Equal) Returns true if both the operands are NOT equal.
    //here true=1, false=0



    //Logical Operators ->
    printf("16. a && b : %d\n", a && b);  //(Logical AND Gate) Returns true if both the operands are true.	
    printf("17. a || b : %d\n", a || b);  //(Logical OR Gate) Returns true if both or any of the operand is true.
    printf("18. !a: %d\n", !a);           //(Logical NOT Gate) Returns true if the operand is false.


    // Assighment operators ->



    return 0;
}