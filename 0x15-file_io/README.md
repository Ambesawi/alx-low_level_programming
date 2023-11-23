# Project 0x15 - C: File I/O

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
- **General**
  - Look for the right source of information online
  - How to create, open, close, read and write files
  - What are file descriptors
  - What are the 3 standard file descriptors, what are their purpose, and what are their POSIX names
  - How to use the I/O system calls open, close, read, and write
  - What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
  - What are file permissions, and how to set them when creating a file with the open system call
  - What is a system call
  - What is the difference between a function and a system call

## Requirements
### General
- **Allowed editors:** vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Do not use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- Allowed syscalls: read, write, open, close
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Files
- `0-read_textfile.c`: Write a function that reads a text file and prints it to the POSIX standard output.
  - Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- `1-create_file.c`: Write a function that creates a file.
  - Prototype: `int create_file(const char *filename, char *text_content);`
- `2-append_text_to_file.c`: Write a function that appends text at the end of a file.
  - Prototype: `int append_text_to_file(const char *filename, char *text_content);`

## Example Usage
### Example of using the functions in a program:

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    ssize_t read_bytes;
    char buffer[1024];

    read_bytes = read_textfile("example.txt", 1024);
    printf("Read %ld bytes from the file.\n", read_bytes);

    int created = create_file("new_file.txt", "This is a new file.\n");
    printf("File created: %d\n", created);

    int appended = append_text_to_file("new_file.txt", "Appending more text.\n");
    printf("File appended: %d\n", appended);

    return (0);
}
