//A pointer is a variable that stores the memory address of another variable. Instead of holding a direct value, it holds the address where the value is stored in memory.
//Dereferencing operator(*) used to declare pointer variable and access the value stored in the address.
//Address operator(&) used to returns the address of a variable or to access the address of a variable to a pointer.

#include <stdio.h>
int main(){
    // printing the memory address of variable 
    int a;
    printf("adress of a is: %p\n", &a); 

    // printing the memory address of variable using pointer
    int* b = &a;
    printf("adress of a is: %p\n", b); 

    //pointer of pointer
    int** c = &b;
    printf("adress of b is: %p\n", c); 


    return 0;
}