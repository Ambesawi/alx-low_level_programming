# 0x00. C - Hello, World

## Learning Objectives

At the end of this project, you should be able to explain the following concepts without the help of Google:

### General

- **C Programming:**
  - Understanding why C programming is awesome.

- **C Inventors:**
  - Knowing who invented C.

- **Influential Figures:**
  - Understanding who Dennis Ritchie, Brian Kernighan, and Linus Torvalds are.

- **gcc Command:**
  - Knowing what happens when you type `gcc main.c`.

- **Entry Point:**
  - Understanding what an entry point is.

- **main Function:**
  - Knowing what `main` is.

- **Printing Text:**
  - Knowing how to print text using `printf`, `puts`, and `putchar`.

- **Sizeof Operator:**
  - Knowing how to get the size of a specific type using the unary operator `sizeof`.

- **Compilation with gcc:**
  - Understanding how to compile using `gcc`.

- **Default Program Name:**
  - Knowing what is the default program name when compiling with `gcc`.

- **C Coding Style:**
  - Understanding the official C coding style and how to check your code with `betty-style`.

- **Header Inclusion:**
  - Knowing how to find the right header to include in your source code when using a standard library function.

- **Main Function's Influence:**
  - Understanding how the main function influences the return value of the program.

### Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet the above learning objectives. You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. You are not allowed to publish any content of this project. Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### C

- **Allowed Editors:**
  - vi, vim, emacs.

- **Compilation Environment:**
  - All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

- **File Ending:**
  - All your files should end with a new line.

- **README.md at Root:**
  - A `README.md` file at the root of the repo, containing a description of the repository.

- **README.md in Project Folder:**
  - A `README.md` file, at the root of the folder of this project, containing a description of the project.

- **Compilation Warnings:**
  - There should be no errors and no warnings during compilation.

- **System Function:**
  - You are not allowed to use `system`.

- **Betty Style:**
  - Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`.

### Shell Scripts

- **Allowed Editors:**
  - vi, vim, emacs.

- **Testing Environment:**
  - All your scripts will be tested on Ubuntu 20.04 LTS.

- **Script Length:**
  - All your scripts should be exactly two lines long (`$ wc -l file` should print 2).

- **File Ending:**
  - All your files should end with a new line.

- **First Line:**
  - The first line of all your files should be exactly `#!/bin/bash`.

## More Info

### Betty Linter

To run the Betty linter just with the command `betty <filename>`:

1. Go to the [Betty repository](https://github.com/holbertonschool/Betty)
2. Clone the repo to your local machine
3. `cd` into the Betty directory
4. Install the linter with `sudo ./install.sh`
5. `emacs` or `vi` a new file called `betty`, and copy the script provided in the project description.
6. Save the file, exit, and change permissions with `chmod a+x betty`
7. Move the `betty` file into the `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
8. You can now type `betty <filename>` to run the Betty linter!
