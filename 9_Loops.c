#include <stdio.h>

int main(){
    //1. for loop->
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf( "%d Hello World\n",i);   
    }
    //syntex->
    /*for (initialize expression; test expression; update expression)
    {
       // body of for loop
    }*/




    //2. While loop->
    // Initialization expression
    int j = 0; 
    // Test expression
    while(j <= 10)
    {
       // loop body
       printf("%d Bye World\n",j);   
    
       // update expression
       j++;
    } 
    // Syntex->
    /*initialization_expression;
    while (test_expression)
    {
        // body of the while loop
        update_expression;
    }*/




    //3. do-while lopps->
    // Initialization expression
    int k = 0; 
    do
    {
      // loop body
      printf( "%d Welcome\n",k);   
      // Update expression
      k++;
      // Test expression
    }  while (k <= 10); 
    //syntex->
    /*initialization_expression;
    do
    {
        // body of do-while loop
        update_expression;
    } while (test_expression); */   
    return 0;
}