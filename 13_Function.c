//syntax
//return_type name_of_the_function (parameter_1, parameter_2);

#include <stdio.h>
// Function that takes two parameters 
// a and b as inputs and returns 
// their sum
int sum1(int a, int b) 
{ 
  return a + b; 
}


int sum2(int a, int b)
{
    int sum = a+b;
    printf("%d", sum);
    return a+b;
}


// Driver code
int main()
{
  int a,b;
  a=11;
  b=22;
  int add1= sum1(a,b);
  printf("Sum is: %d\n", add1); 
  // Calling sum function and 
  // storing its value in add variable
  int add2 = sum1(10, 30);
  printf("Sum is: %d\n", add2);


  printf("Sum is: %d", sum2(20,30));

}