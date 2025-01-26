#include <stdio.h>
int main()
{
    printf("1. Hello \n World \n");   //It moves the cursor to the start of the next line.
    printf("2. Hello \t World \n");   //It inserts some whitespace to the left of the cursor and moves the cursor accordingly.(Horizontal space)
    printf("3. Hello \v World \n");   //It is used to insert vertical space.
    printf("4. Hello \\ World \n");   //Use to insert backslash character.
    printf("5. Hello \' World \n");   //It is used to display a single quotation mark.
    printf("6. Hello \" World \n");   //It is used to display a double quotation mark.
    printf("7. Hello \? World \n");   //It is used to display a question mark.
    printf("8. Hello \0 World \n");   //It represents the NULL character.
    printf("Hello \r9. World \n");    //It moves the cursor to the start of the current line.
    printf("10. Hello \f World \n");  //It is used to move the cursor to the start of the next logical page.
    printf("11. Hello \b World");     //It is used to move the cursor one place backward.(Backspace)
    return 0;
}