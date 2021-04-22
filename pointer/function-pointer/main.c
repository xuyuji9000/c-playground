#include <stdio.h>

void fun(int a)
{
    printf("value of a is %d \n", a);
}

int main() 
{
    void(* fun_ptr)(int) = &fun;
    (*fun_ptr)(7);
    return 0;
}

