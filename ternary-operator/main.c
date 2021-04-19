#include <stdio.h>


int main() 
{
    int condition = 0; 
    char *output = NULL;

    // If the condition is true, print out "true"
    // If the condition is false, print out "false"
    output = condition ? (char *)"true" : (char *)"false";

    printf("ternary operator output: %s\n", output);
    return 0;
}
