This file document the learning of "How to locate library header with compiler"

``` shell
echo "#include <sys/types.h>" | gcc -E -x c - | grep types.h
```


# Reference

1. [Where is sys/types.h located?](https://stackoverflow.com/questions/11823063/where-is-sys-types-h-located#answer-11823107)

