// Q: How does a char array ends?
// A: char array should end with a '\0'

#include <stdio.h>

int main() {
    
    char chr[] = "Hello World!\n";
    printf("%d\n", (int)*(&chr[12]+1));
    return 0;
}
