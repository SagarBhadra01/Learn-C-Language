#include <stdio.h>
#include <string.h>

int main(){
    //assigning string without size
    char str1[] = "SagarBhadra";

    //assigning string with size
    char str2[20] = "SagarBhadra";
    printf("%s",str2);

    //assigning by user
    char str3[10];
    printf("\n put string:");
    scanf("%s", str3);
    printf("%s\n", str3);

    // Creating array of strings for 3 strings with max length of each string as 10
    char arr[3][10] = {"Sagar", "Sagar", "Sagar"};
    for (int i = 0; i < 3; i++){
       printf("%s\n", arr[i]);
    }
    /*Syntax-
    char arr_name[r][m] = {s1, s2, …., sn};
    Here,
    arr_name: Name of the variable.
    r: Maximum number of strings to be stored in the array
    m: Maximum number of character values that can be stored in each string.
    s1, s2, …., sn: Strings to be stored.*/
    return 0;
}