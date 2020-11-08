#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    size_t string_length = 10;
    char * s1 = (char *)malloc(string_length * sizeof(char));
    char * s2 = (char *)malloc(string_length * sizeof(char));

    strcpy(s1, "test1");
    strcpy(s2, "test2");

    int start;
    for(start=(int)s1; 0 != s1[0] && 0 != s2[0] && s1[0] == s2[0]; s1++, s2++) {}
    printf("common length: %d\n", (int)s1 - start);
    
    return 0;
}
