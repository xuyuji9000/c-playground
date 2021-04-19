This folder contains an example of using `errno.h`.


- Build command

``` shell
gcc -o main ./main.c
```

- Find where *errno.h* is located


``` shell
echo "#include <errno.h>" | gcc -E -x c - | grep errno.h
```


# Reference

1. [errno(3) — Linux manual page](https://man7.org/linux/man-pages/man3/errno.3.html)
    
    > get more details about "errno.h" here

