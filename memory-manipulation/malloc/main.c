// Build command: gcc -o main ./main.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n=10;

    ptr = (int*)malloc(n * sizeof(int)); 

    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    }

    for(int i=0; i<n; i++) {
        *(ptr+i) = i+1;
    }

    for(int i=0; i<n; ++i) {
        printf("%d\n", *(ptr+i));
    }

    free(ptr);
    

    return 0;
}