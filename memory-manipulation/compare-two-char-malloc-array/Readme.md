Q: How to populate variable allocated by `malloc`?

A: 

``` C
#include <string.h>

// ...

int s_length=10;
char *s = malloc(s_length*sizeof(char));
strcpy(s, "Hello World!");
printf("%s\n", s);

// ...

```