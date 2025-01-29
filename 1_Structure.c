#include <stdio.h>              //header
int main()                      //main
{
  printf("Hello World!");       //statement
  return 0;                     //return
}                               //{} -> body


//C is a general- purpose  programming language created by Dennis Ritchie at Bell Laboratories in 1972.
//Unix operating system,MySQL database, most part of Ruby,Pearl,apache,etc was written by C-Language.
//Many later languages have borrowed syntex/features directly or indirectly from c, like the syntex of JAVA,PHP,JS and many more that are mainly based on C.
//C++ is a super set of C.


//Special Symbols ->
// Brackets[]: Opening and closing brackets are used as array element references. These indicate single and multidimensional subscripts.
// Parentheses(): These special symbols are used to indicate function calls and function parameters.
// Braces{}: These opening and ending curly braces mark the start and end of a block of code containing more than one executable statement.
// Comma (, ): It is used to separate more than one statement like for separating parameters in function calls.
// Colon(:): It is an operator that essentially invokes something called an initialization list.
// Semicolon(;): It is known as a statement terminator.  It indicates the end of one logical entity. That’s why each individual statement must be ended with a semicolon.
// Asterisk (*): It is used to create a pointer variable and for the multiplication of variables.
// Assignment operator(=): It is used to assign values and for logical operation validation.
// Pre-processor (#): The preprocessor is a macro processor that is used automatically by the compiler to transform your program before actual compilation.
// Period (.): Used to access members of a structure or union.
// Tilde(~): Bitwise One’s Complement Operator.

#include <stdio.h>

int main() {
    int n = 9;
  
    // if statement with true condition
    if (n < 10) {
        printf("%d < 10", n);
    }

    // if statement with false condition
    if (n > 20) {
        printf("%d > 20", n);
    }

    return 0;
}