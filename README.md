_This project has been created as part of the 42 curriculum by mahendri._

# libft

## Description

**libft** is a custom implementation of standard C library functions, developed as the foundational project of the 42 curriculum. The goal of this project is to recreate commonly used functions from the C standard library (`libc`) from scratch, gaining a deep understanding of how these functions work at a low level. This library serves as a personal toolkit that can be reused in future 42 projects.

The project is divided into three main parts:

- **Part 1**: Recreation of standard libc functions (string manipulation, memory operations, character checks, etc.)
  - [`ft_isalpha`](#ft_isalpha), [`ft_isdigit`](#ft_isdigit), [`ft_isalnum`](#ft_isalnum), [`ft_isascii`](#ft_isascii), [`ft_isprint`](#ft_isprint), [`ft_toupper`](#ft_toupper), [`ft_tolower`](#ft_tolower), [`ft_strlen`](#ft_strlen), [`ft_strchr`](#ft_strchr), [`ft_strrchr`](#ft_strrchr), [`ft_strncmp`](#ft_strncmp), [`ft_strnstr`](#ft_strnstr), [`ft_strlcpy`](#ft_strlcpy), [`ft_strlcat`](#ft_strlcat), [`ft_strdup`](#ft_strdup), [`ft_memset`](#ft_memset), [`ft_bzero`](#ft_bzero), [`ft_memcpy`](#ft_memcpy), [`ft_memmove`](#ft_memmove), [`ft_memchr`](#ft_memchr), [`ft_memcmp`](#ft_memcmp), [`ft_atoi`](#ft_atoi), [`ft_calloc`](#ft_calloc)

- **Part 2**: Additional utility functions not present in the standard library
  - [`ft_substr`](#ft_substr), [`ft_strjoin`](#ft_strjoin), [`ft_strtrim`](#ft_strtrim), [`ft_split`](#ft_split), [`ft_itoa`](#ft_itoa), [`ft_strmapi`](#ft_strmapi), [`ft_striteri`](#ft_striteri), [`ft_putchar_fd`](#ft_putchar_fd), [`ft_putstr_fd`](#ft_putstr_fd), [`ft_putendl_fd`](#ft_putendl_fd), [`ft_putnbr_fd`](#ft_putnbr_fd)

- **Part 3**: Functions for linked list manipulation
  - [`ft_lstnew`](#ft_lstnew), [`ft_lstadd_front`](#ft_lstadd_front), [`ft_lstadd_back`](#ft_lstadd_back), [`ft_lstsize`](#ft_lstsize), [`ft_lstlast`](#ft_lstlast), [`ft_lstdelone`](#ft_lstdelone), [`ft_lstclear`](#ft_lstclear), [`ft_lstiter`](#ft_lstiter), [`ft_lstmap`](#ft_lstmap)

By completing this project, you develop a solid foundation in C programming, memory management, and algorithmic thinking.

## Instructions

### Prerequisites

- CC compiler (recommanded)
- Unix-based operating system

### Compilation

To compile the library, navigate to the project root directory and run:

```bash
make
```

This will generate the static library file `libft.a`.

### Available Make Commands

- `make` or `make all` - Compiles the library
- `make clean` - Removes object files (.o)
- `make fclean` - Removes object files and the library (libft.a)
- `make re` - Recompiles the entire library from scratch

### Using the Library

To use libft in your own C projects:

1. Include the header file in your source code:

```c
#include "libft.h"
```

2. Compile your program with the library:

```bash
cc -Wall -Wextra -Werror your_file.c libft.a -o your_program
```

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, 42!";
    char *dup = ft_strdup(str);

    printf("Original: %s\n", str);
    printf("Duplicate: %s\n", dup);
    printf("Length: %zu\n", ft_strlen(str));

    free(dup);
    return (0);
}
```

## Resources

### Standard C Library Documentation

- [Linux man pages](https://man7.org/linux/man-pages/) - Complete reference for standard C library functions
- [C Standard Library Reference](https://en.cppreference.com/w/c) - Comprehensive C library documentation
- [freebsd](https://man.freebsd.org/cgi/man.cgi) - Detailed glibc documentation

### C Programming Fundamentals

- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Classic C programming textbook
- [C Memory Management](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/) - Understanding malloc, free, and memory allocation
- [Linked Lists in C](https://www.learn-c.org/en/Linked_lists) - Tutorial on linked list implementation

### 42 Specific Resources

- [libft-tester](https://github.com/Tripouille/libftTester) - Popular testing framework

### AI Usage in This Project

AI assistance was used in the following ways during this project:

1. **Documentation and README Creation**: AI was used to structure and format this comprehensive README file, ensuring all required sections were included and properly organized according to 42 standards.

2. **Code Review and Debugging**: AI tools were consulted to identify potential edge cases and verify the correctness of function implementations, particularly for memory management and pointer operations.

3. **Understanding Standard Library Behavior**: AI was used to clarify the exact behavior and return values of standard C library functions, especially for edge cases and error conditions.

## Library Description

### Part 1: Standard C Library Functions

These functions replicate the behavior of their standard library counterparts:

#### Character Classification & Conversion

- [**`ft_isalpha`**](#ft_isalpha) - Checks if a character is alphabetic
- [**`ft_isdigit`**](#ft_isdigit) - Checks if a character is a digit
- [**`ft_isalnum`**](#ft_isalnum) - Checks if a character is alphanumeric
- [**`ft_isascii`**](#ft_isascii) - Checks if a character is in the ASCII table
- [**`ft_isprint`**](#ft_isprint) - Checks if a character is printable
- [**`ft_toupper`**](#ft_toupper) - Converts a character to uppercase
- [**`ft_tolower`**](#ft_tolower) - Converts a character to lowercase

#### String Manipulation

- [**`ft_strlen`**](#ft_strlen) - Calculates the length of a string
- [**`ft_strchr`**](#ft_strchr) - Locates the first occurrence of a character in a string
- [**`ft_strrchr`**](#ft_strrchr) - Locates the last occurrence of a character in a string
- [**`ft_strncmp`**](#ft_strncmp) - Compares two strings up to n characters
- [**`ft_strnstr`**](#ft_strnstr) - Locates a substring within a string (limited by length)
- [**`ft_strlcpy`**](#ft_strlcpy) - Copies a string to a destination buffer (size-bounded)
- [**`ft_strlcat`**](#ft_strlcat) - Concatenates strings (size-bounded)
- [**`ft_strdup`**](#ft_strdup) - Duplicates a string (allocates memory)

#### Memory Operations

- [**`ft_memset`**](#ft_memset) - Fills memory with a constant byte
- [**`ft_bzero`**](#ft_bzero) - Sets memory to zero
- [**`ft_memcpy`**](#ft_memcpy) - Copies memory area
- [**`ft_memmove`**](#ft_memmove) - Copies memory area (handles overlapping regions)
- [**`ft_memchr`**](#ft_memchr) - Scans memory for a character
- [**`ft_memcmp`**](#ft_memcmp) - Compares memory areas

#### Conversion & Allocation

- [**`ft_atoi`**](#ft_atoi) - Converts a string to an integer
- [**`ft_calloc`**](#ft_calloc) - Allocates and zeros memory

### Part 2: Additional Utility Functions

These functions extend the standard library with useful utilities:

#### String Creation & Manipulation

- [**`ft_substr`**](#ft_substr) - Extracts a substring from a string
- [**`ft_strjoin`**](#ft_strjoin) - Concatenates two strings into a new string
- [**`ft_strtrim`**](#ft_strtrim) - Trims specified characters from both ends of a string
- [**`ft_split`**](#ft_split) - Splits a string into an array of strings using a delimiter
- [**`ft_itoa`**](#ft_itoa) - Converts an integer to a string

#### Function Application

- [**`ft_strmapi`**](#ft_strmapi) - Applies a function to each character of a string (creating a new string)
- [**`ft_striteri`**](#ft_striteri) - Applies a function to each character of a string (modifying in place)

#### File Descriptor Output

- [**`ft_putchar_fd`**](#ft_putchar_fd) - Outputs a character to a file descriptor
- [**`ft_putstr_fd`**](#ft_putstr_fd) - Outputs a string to a file descriptor
- [**`ft_putendl_fd`**](#ft_putendl_fd) - Outputs a string followed by a newline to a file descriptor
- [**`ft_putnbr_fd`**](#ft_putnbr_fd) - Outputs an integer to a file descriptor

### Part 3: Linked List Functions

These functions provide basic linked list manipulation capabilities:

#### Linked List Structure

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

#### Linked List Operations

- [**`ft_lstnew`**](#ft_lstnew) - Creates a new list element
- [**`ft_lstadd_front`**](#ft_lstadd_front) - Adds an element at the beginning of a list
- [**`ft_lstadd_back`**](#ft_lstadd_back) - Adds an element at the end of a list
- [**`ft_lstsize`**](#ft_lstsize) - Counts the number of elements in a list
- [**`ft_lstlast`**](#ft_lstlast) - Returns the last element of a list
- [**`ft_lstdelone`**](#ft_lstdelone) - Deletes and frees a single list element
- [**`ft_lstclear`**](#ft_lstclear) - Deletes and frees all elements of a list
- [**`ft_lstiter`**](#ft_lstiter) - Applies a function to each element of a list
- [**`ft_lstmap`**](#ft_lstmap) - Creates a new list by applying a function to each element
