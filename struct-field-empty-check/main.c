#include <stdio.h>

struct my_struct 
{
    char A;
    char B;
};


int main() 
{
    struct my_struct instance = {
        .A = 'a'
    };
    if(instance.A)
        printf("Field A exists\n");
    if(instance.B)
        printf("Field B exists\n");
    return 0;
}

