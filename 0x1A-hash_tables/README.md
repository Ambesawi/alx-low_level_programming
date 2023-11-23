# 0x1A. C - Hash tables

## Overview

This project explores the implementation and usage of hash tables in the C programming language. The tasks are designed to enhance your understanding of hash functions, hash tables, collisions, and their applications.

## Learning Objectives

Upon completion, you should be able to:

- Explain what a hash function is.
- Identify the characteristics of a good hash function.
- Understand the structure and functioning of a hash table.
- Handle collisions in the context of a hash table.
- Evaluate the advantages and drawbacks of using hash tables.
- Recognize common use cases for hash tables.

## Resources

- [What is a HashTable Data Structure](https://www.youtube.com/watch?v=MfhjkfocRR0) - Introduction to Hash Tables, Part 0
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://www.youtube.com/watch?v=h2d9b_nEzoA)
- [Why hash tables and not arrays](https://stackoverflow.com/questions/730620/how-does-a-hash-table-work)
- [Python Dictionaries](https://docs.python.org/3/faq/design.html#how-are-dictionaries-implemented)

## Requirements

### General

- **Allowed editors:** vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a newline character
- A `README.md` file at the root of the project folder is mandatory
- Code should follow the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
- Do not use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all functions should be included in the `hash_tables.h` header file
- Do not forget to push your header file
- All header files should be include guarded

### Data Structures

Please use the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, a string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
