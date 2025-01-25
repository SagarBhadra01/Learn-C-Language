#include <stdio.h>
int main ()
{
    //declaring variables
    int a;
    float b;
    char c;
    //here a,b,c are variable name
    // A variable name can only contain alphabets, digits, and underscores(_).
    // A variable cannot start with a digit.
    // A variable cannot include any white space in its name.
    // The name should not be a reserved keyword or any special character.


    //storing data
    a= 10;
    b= 6.9;
    c= 'S'; // use-> ''
 
    //print all data
    printf(" Print a= %d \n", a);
    printf(" Print b= %f \n", b);
    printf(" Print c= %c \n", c);
    // Format Specifiers for int- %d or %i
    // Format Specifiers for float- %f 
    // Format Specifiers for char- %c

    //we can write multiple variable value together, like-
    int d,e,f;

    //double data type
    double g=10.12345678987654321;
    float h=10.12345678987654321;
    printf(" Print g= %lf \n", g);
    printf(" Print h= %f \n", h);

    
    //size-
    // int	: 	2 or 4 bytes 
    // float:	4 bytes
    // double: 	8 bytes	
    // char :	1 bytes	

}
