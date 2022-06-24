# 0x09-static_libraries

## Description

**The aim of this project is**

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of `ar`, `ranlib`, `nm`

## Requirements

* Ubuntu 20.04 LTS
* gcc, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`

## Tasks

**Mandatory Tasks**

[libmy.a](libmy.a) - archive library containing a given various functions from the previous projects

[main.h](main.h) - contain all the prototypes of the given functions

[create_static_lib.sh](create_static_lib.sh) - creates a static library called `liball.a` from all the `.c` files that are in the current directory
