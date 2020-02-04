/*
* int strcmp(const char *s1, const char *s2)
* 
* Return value:
* - Negative value if s1 appears before s2 in lexicographical order 
* - Zero if s1 and s2 compares equal
* - Positive value if s1 appears after s2 in lexicographical order
*/

#include <stdio.h>
#include <string.h>



int main() {
    char *s1 = "string1";
    char *s2 = "string3";

    int result = strcmp(s1, s2);
    printf("result: %d\n", result);
    return 0;
}
