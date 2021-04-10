#include <stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main() 
{
    for(int i=Mon; i <=Sun; i++) 
    {
        printf("%d\n",i);
    }
    return 0;
}
