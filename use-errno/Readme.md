This folder contains an example of using `errno.h`.


- Build command

``` shell
gcc -o main ./main.c
```

- Find where *errno.h* is located


``` shell
echo "#include <errno.h>" | gcc -E -x c - | grep errno.h
```
