# 0x00-hello_world
---
## Description about the project
---
The main goal of this project is 
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is `main`
* How to print text using `printf` `puts` and `putchar`
* How to get the size of a specific type using the unary operator `sizeof`
* How to compile using `gcc`
* What is the default program name when compiling with `gcc`
* What is the official C coding style and how to check your code with `betty-style`
* How to find the right header to include in your source code when using a standard library function
* How does the `main` function influence the return value of the program

## Requirements

* Ubuntu 20.04 LTS
* gcc using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`

## Tasks

### Mandatory Tasks
[0-preprocessor](#0-preprocessor) - a script that runs a C which is saved as a variable named `$CFILE` file through the preprocessor and save the result into another file named `c`

[1-compiler](#1-compiler) - script that compiles a C file which is saved in the variable `$CFILE` but does not link

[2-assembler](#2-assembler) - a bash script that generates the assembly code of a C which is saved in the variable `$CFILE` and save it in an output file

[3-name](#3-name) - a bash script that compiles a C that is saved in a variable `$CFILE` file and creates an executable named `cisfun`

[4-puts.c](#4-puts.c) - this C program that prints exactly `"Programming is like building a multilingual puzzle,` followed by a new line

[5-printf.c](#5-printf.c) - this C program that prints exactly `with proper grammar, but the outcome is a piece of art,` followed by a new line

[6-size.c](#6-size.c) - this C program that prints the size of various types on the computer it is compiled and run on

[100-intel](#100-intel) - a script that generates the assembly code `(Intel syntax)` of a C that is saved in a variable `$CFILE` code and save it in an output file

[101-quote.c](#101-quote.c) - this C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19,` followed by a new line, to the standard error without using formated output of `printf` and `puts` 
