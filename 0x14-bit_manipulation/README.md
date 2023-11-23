# Project 0x14 - C: Bit Manipulation

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
- **General**
  - Look for the right source of information without too much help
  - How to manipulate bits and use bitwise operators

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
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Files
- `0-binary_to_uint.c`: Write a function that converts a binary number to an `unsigned int`.
  - Prototype: `unsigned int binary_to_uint(const char *b);`
- `1-print_binary.c`: Write a function that prints the binary representation of a number.
  - Prototype: `void print_binary(unsigned long int n);`
- `2-get_bit.c`: Write a function that returns the value of a bit at a given index.
  - Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- `3-set_bit.c`: Write a function that sets the value of a bit to `1` at a given index.
  - Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- `4-clear_bit.c`: Write a function that sets the value of a bit to `0` at a given index.
  - Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- `5-flip_bits.c`: Write a function that returns the number of bits you would need to flip to get from one number to another.
  - Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

## Example Usage
### Example of using the functions in a program:

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned int binary_num = binary_to_uint("1101");
    printf("Binary to unsigned int: %u\n", binary_num);

    printf("Binary representation of 98: ");
    print_binary(98);
    putchar('\n');

    int bit_value = get_bit(1024, 5);
    printf("Bit at index 5 is: %d\n", bit_value);

    unsigned long int number = 1024;
    set_bit(&number, 2);
    printf("Setting bit at index 2: %lu\n", number);

    clear_bit(&number, 5);
    printf("Clearing bit at index 5: %lu\n", number);

    unsigned int flip_count = flip_bits(1024, 1025);
    printf("Bits to flip to get from 1024 to 1025: %u\n", flip_count);

    return (0);
}
