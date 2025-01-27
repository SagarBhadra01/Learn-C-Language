#include <stdio.h>

int main(){
    //There are three types of operator: Unary, Binary, ternary
    int a = 25, b = 5;

    //Arithmetic Operators ->
    printf("1. a + b = %d\n", a + b);  //(plus) Adds two numeric values.	
    printf("2. a - b = %d\n", a - b);  //(Minus) Subtracts right operand from left operand.	
    printf("3. a * b = %d\n", a * b);  //(Multiply) Multiply two numeric values.	
    printf("4. a / b = %d\n", a / b);  //(Divide) Divide two numeric values.	
    printf("5. a %% b = %d\n", a % b); //(Modulus) Returns the remainder after diving the left operand with the right operand.	
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
    printf("19. a = b: %d\n", a = b);     //(Simple Assign) Assign the value of the right operand to the left operand.	
    printf("20. a += b: %d\n", a += b);   //(Plus & Assign) (a = a + b) Add the right operand and left operand and assign this value to the left operand.
    printf("21. a -= b: %d\n", a -= b);   //(Minus & Assign) (a = a - b) Subtract the right operand and left operand and assign this value to the left operand.
    printf("22. a *= b: %d\n", a *= b);   //(Multiply & Assign) (a = a * b) Multiply the right operand and left operand and assign this value to the left operand.
    printf("23. a /= b: %d\n", a /= b);   //(Divide & Assign) (a = a / b) Divide the left operand with the right operand and assign this value to the left operand.		
    printf("24. a %%= b: %d\n", a %= b);  //(Modulus & Assign) (a = a % b) Assign the remainder in the division of left operand with the right operand to the left operand.	
    printf("25. a &= b: %d\n", a &= b);   //(AND & Assign) (a = a & b) Performs bitwise AND and assigns this value to the left operand.	
    printf("26. a |= b: %d\n", a |= b);   //(OR & Assign) (a = a | b) Performs bitwise OR and assigns this value to the left operand.	
    printf("27. a ^= b: %d\n", a ^= b);   //(XOR & Assign) (a = a ^ b) Performs bitwise XOR and assigns this value to the left operand.	
    printf("28. a >>= b: %d\n", a >>= b); //(Rightshift & Assign) (a = a >> b) Performs bitwise Rightshift and assign this value to the left operand.	
    printf("29. a <<= b: %d\n", a <<= b); //(Leftshift & Assign) (a = a << b) Performs bitwise Leftshift and assign this value to the left operand.


    //Bitwise operator ->
    printf("a & b: %d\n", a & b);   //(Bitwise AND) 
    printf("a | b: %d\n", a | b);   //(Bitwise OR) 
    printf("a ^ b: %d\n", a ^ b);   //(Bitwise XOR) 
    printf("~a: %d\n", ~a);         //(Bitwise First Complement) 
    printf("a >> b: %d\n", a >> b); //(Bitwise Leftshift) 
    printf("a << b: %d\n", a << b); //(Bitwise Rightshift) 


    // "?:" use for terminal condition.(its ternary operator)

    return 0;
}