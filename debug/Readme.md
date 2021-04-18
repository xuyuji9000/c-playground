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

## Commands

- OS: centos:8

- Install 

  ``` bash
  docker run -it centos:8
  yum install gcc gdb
  ```

- Start GDB

  `gdb a.out`

- Commands within GDB

  - Display source code: `layout next`

    > use `help layout` to get more window options

  - Change window focus: `layout src`

    > use `help focus` to get more window focusing options

  - Run your program: `run`

  - Break at a specific line: `break filename:linenumber`

  - Step through line by line: `next`

  - Print out variable value: `print VARIABLE_NAME`

  - Go into function: `step`


# Reference

1. [9.2 - Debugging - GDB Tutorial](https://www.youtube.com/watch?v=bWH-nL7v5F4)

    > Video Reference: Gives more intuitive introduction.

2. [gcc -Wall option flag](https://www.rapidtables.com/code/linux/gcc/gcc-wall.html)


3. [gcc -g option flag](https://www.rapidtables.com/code/linux/gcc/gcc-g.html)


4. [“please check gdb is codesigned - see taskgated(8)” - How to get gdb installed with homebrew code signed?](https://stackoverflow.com/questions/18423124/please-check-gdb-is-codesigned-see-taskgated8-how-to-get-gdb-installed-w#answer-32727069)

    >  Prepare certificate and certify gdb command on MacOS
