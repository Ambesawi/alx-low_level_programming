# Project 0x0C - C: More malloc, free

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- How to use the exit function
- Understanding the functions `calloc` and `realloc` from the standard library and how to use them

## Project Overview
This project focuses on enhancing your understanding and proficiency in memory allocation and deallocation in C, particularly in using `malloc`, `free`, `exit`, `calloc`, and `realloc`. The tasks in this project aim to reinforce your knowledge and skills in dynamic memory management.

## Requirements
### General
- **Allowed editors:** vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Do not use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, as we will use our file. If you do, it won't be taken into account

## Project Structure
- All your function prototypes and the prototype of the function `_putchar` should be included in your header file called `main.h`

## How to Compile
To compile your code, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o your_executable_name
