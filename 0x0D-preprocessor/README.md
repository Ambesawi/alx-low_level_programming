# Project 0x0D - C: Preprocessor

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are macros and how to use them
- Understanding the most common predefined macros
- How to include guard your header files

## Project Overview
This project focuses on deepening your understanding of the C preprocessor, including the use of macros and header file inclusion guards. The tasks in this project aim to reinforce your knowledge and skills in working with preprocessor directives.

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
- All your header files should be include guarded to prevent multiple inclusion

## How to Compile
To compile your code, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o your_executable_name
