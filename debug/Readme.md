This folder introduce debug tool gdb.


## Q: What is a debugger?

A: A debugger is a program that simulates/runs another program and allows you to:

  - Pause an continue its execution

  - Set "break points" or conditions where the execution pauses so you can look at its state

  - View and "watch" variable values

  - Step through a program line by line 



## Q: What's the debugger used here?

A: `gcc -Wall -g program.c`

  > `-Wall` enables all compiler's warning messages [2]

  >  `-g` generates debug information to be used by GDB debugger [3]

## Installation

`brew install gdb`


# Reference

1. [9.2 - Debugging - GDB Tutorial](https://www.youtube.com/watch?v=bWH-nL7v5F4)

    > Video Reference: Gives more intuitive introduction.

2. [gcc -Wall option flag](https://www.rapidtables.com/code/linux/gcc/gcc-wall.html)


3. [gcc -g option flag](https://www.rapidtables.com/code/linux/gcc/gcc-g.html)

