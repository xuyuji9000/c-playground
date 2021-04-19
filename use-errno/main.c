#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno ;


int main()
{
    FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb");

    if (pf == NULL) {
    
       // save the errno(error number)
       errnum = errno;
       fprintf(stderr, "Value of errno: %d\n", errno);
       // use errno to get error message
       fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
    } else {
    
       fclose (pf);
    }

    return 0;
}

