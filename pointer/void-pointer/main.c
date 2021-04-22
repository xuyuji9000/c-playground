#include <stdio.h>


int main() {
    int a =7;
    void *p;
    p = &a;
    printf("%d\n", *((int *)p));
    return 0;
}
