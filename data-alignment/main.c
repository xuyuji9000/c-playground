#include <stdio.h>

int main()
{
    int input    = 6;
    int align_to = 4;

    printf("input: %d\n", input);
    printf("input+align_to-1: %d\n", input+align_to-1);
    printf("~(align_to-1): %d\n", ~(align_to-1));
    printf("(input+align_to-1) & ~(align_to-1) : %d\n", (input+align_to-1) & ~(align_to-1));

    return 0;
}

