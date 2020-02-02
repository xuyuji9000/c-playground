#include <stdio.h>
#include <string.h>


int main() {
    // printf("Hello World!\n");
    char* str = "Hello World!\n";
    fwrite(str, 1, strlen(str), stdout);
    return 0;
}