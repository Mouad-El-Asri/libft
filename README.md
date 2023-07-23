# libft
libft is a comprehensive C library that contains a collection of custom-made functions, specifically designed to provide fundamental functionality that mimics some of the standard C library functions.
This project serves as an essential learning experience, as it challenges me to implement these functions from scratch, gaining a deeper understanding of the underlying concepts of programming in C.

## Table of Contents
- [Introduction](#introduction)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Example](#example)
- [Function List](#function-list)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction
The primary purpose of `libft` is to provide a solid foundation of basic functions that can be reused across various C projects.
By creating my own version of these functions, I've developed a practical understanding of data manipulation, memory management, and algorithm design, which are essential skills in software development.

## Getting Started
To get started with the `libft` library, follow the steps below for installation and usage:
### Prerequisites
Before using the "libft" library, ensure you have the following prerequisites installed on your system:

- A C compiler (e.g., GCC, Clang)
- Git (optional but recommended for easy cloning)

### Installation
1. Clone the "libft" repository to your local machine using Git (if you haven't already):

```bash
git clone https://github.com/Mouad-El-Asri/libft.git
```

Alternatively, you can download the ZIP archive of the repository from the GitHub page and extract it to your desired location.

2. Navigate to the "libft" directory:

```bash
cd libft
```

3. Compile the library using the provided Makefile:

```bash
make
```

This will build the "libft.a" static library, containing all the custom functions implemented in the project.

## Usage
To use the "libft" library in your C projects, simply include the "libft.h" header file in your source files:

```c
#include "libft.h"
```

Link the "libft.a" library to your project during the compilation process. You can do this by adding the following flag to your compiler command:

```bash
gcc -o your_program your_source_file.c libft.a
```

Replace ```your_program``` with the desired output binary name and ```your_source_file.c``` with the name of your source file.

## Example
Here's a simple example of how to use the "libft" library in a C program:
```c
#include <stdio.h>
#include "libft.h"

int  main()
{
    char *str;
    int length;

    str = "Hello, libft!";
    length = ft_strlen(str);

    printf("Length of the string: %d\n", length);

    return (0);
}
```
In this example, we used the ft_strlen function from the "libft" library to calculate the length of a string.

## Function List
- `ft_atoi` : Convert a string to an integer.
- `ft_bzero` : Set a block of memory to zero.
- `ft_calloc` : Allocate memory for an array and set its elements to zero.
- `ft_isalnum` : Check if a character is alphanumeric.
- `ft_isalpha` : Check if a character is alphabetic.
- `ft_isascii` : Check if a character is a valid ASCII character.
- `ft_isdigit` : Check if a character is a digit.
- `ft_isprint` : Check if a character is printable.
- `ft_itoa` : Convert an integer to a string.
- `ft_memchr` : Search for a character in a block of memory.
- `ft_memcmp` : Compare two blocks of memory.
- `ft_memcpy` : Copy a block of memory from source to destination.
- `ft_memmove` : Safely copy a block of memory from source to destination, handling overlap.
- `ft_memset` : Fill a block of memory with a specified value.
- `ft_putchar_fd` : Output a character to a specified file descriptor.
- `ft_putendl_fd` : Output a string followed by a newline to a specified file descriptor.
- `ft_putnbr_fd` : Output an integer to a specified file descriptor.
- `ft_putstr_fd` : Output a string to a specified file descriptor.
- `ft_split` : Split a string into an array of substrings using a specified delimiter.
- `ft_strchr` : Find the first occurrence of a character in a string.
- `ft_strdup` : Duplicate a string, allocating memory for the new string.
- `ft_striteri` : Apply a function to each character of a string, passing its index as an argument.
- `ft_strjoin` : Concatenate two strings to create a new one.
- `ft_strlcat` : Safely concatenate two strings with size limitation.
- `ft_strlcpy` : Safely copy a string from source to destination with a specified size limit.
- `ft_strlen` : Calculate the length of a string.
- `ft_strmapi` : Create a new string resulting from the application of a function to each character of another string, passing its index as an argument.
- `ft_strncmp` : Compare two strings up to a specified number of characters.
- `ft_strnstr` : Find the first occurrence of a substring in a string with a specified length.
- `ft_strrchr` : Find the last occurrence of a character in a string.
- `ft_strtrim` : Remove leading and trailing whitespaces from a string.
- `ft_strsubstr` : Extract a substring from a string.
- `ft_tolower` : Convert a character to lowercase.
- `ft_toupper` : Convert a character to uppercase.
- `ft_lstnew` : Create a new element for a linked list.
- `ft_lstsize` : Calculate the number of elements in a linked list.
- `ft_lstlast` : Get the last element of a linked list.
- `ft_lstadd_front` : Add a new element to the beginning of a linked list.
- `ft_lstadd_back` : Add a new element to the end of a linked list.

## Contributing
I welcome contributions to the "libft" project. If you find any issues, bugs, or have enhancements to suggest, please feel free to submit a pull request. Before you do, please take a moment to read through the guidelines below:

1. **Fork** the repository on GitHub.

2. Create a new **branch** from the `main` branch to work on your changes.

3. Make your desired changes to the codebase. Ensure that your code follows the project's coding style and conventions.

4. Test your changes thoroughly to avoid introducing new bugs or issues.

5. Commit your changes with clear and descriptive commit messages.

6. Push your changes to your forked repository.

7. Submit a pull request to the original `libft` repository. Provide a detailed description of the changes you made, why they are necessary, and any potential implications.

I will review your pull request as soon as possible.

Thank you for contributing to the `libft` project and helping to make it even better!

## Acknowledgments
I would like to acknowledge the creators of the 42 Network curriculum.
