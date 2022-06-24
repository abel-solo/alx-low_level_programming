# 0x0A. C-ardc,argv

## Description about the project

**The main objective of this project is**
* How to use arguments passed to your program
* What are two prototypes of `main` that you know of, and in which case do you use one or the other
* How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

---

## Requirements
* Ubuntu 20.04 LTS
* gcc, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`

## Tasks

**Mandatory Tasks**

[0-whatsmyname.c](0-whatsmyname.c) - this program prints its name, followed by a new line

[1-args.c](1-args.c) - this program prints the number of arguments passed into it

[2-args.c](2-args.c) - this program prints all arguments it receives

[3-mul.c](3-mul.c) - this print the result of the multiplication, followed by a new line and if the program does not receive two arguments, your program should print `Error`, followed by a new line, and `return 1`

[4-add.c](4-add.c) - this program that adds positive numbers If no number is passed to the program, print 0, followed by a new line if one of the number contains symbols that are not digits, print `Error`, followed by a new line, and `return 1`
