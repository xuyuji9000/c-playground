#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "memset() example\n";
    
    printf("Before memset(): %s", str);

    memset(str+2, '.', 10*sizeof(char));

    printf("After memset(): %s", str);

    return 0;
}