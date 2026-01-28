# libft

*This project has been created as part of the 42 curriculum by mahendri.*

## Description

**libft** is a custom implementation of standard C library functions, developed as the foundational project of the 42 curriculum. The goal of this project is to recreate commonly used functions from the C standard library (`libc`) from scratch, gaining a deep understanding of how these functions work at a low level. This library serves as a personal toolkit that can be reused in future 42 projects.

The project is divided into three main parts:
- **Part 1**: Recreation of standard libc functions (string manipulation, memory operations, character checks, etc.)
- **Part 2**: Additional utility functions not present in the standard library
- **Part 3**: Bonus functions for linked list manipulation

By completing this project, you develop a solid foundation in C programming, memory management, and algorithmic thinking.

## Instructions

### Prerequisites

- GCC compiler or any C compiler
- Make utility
- Unix-based operating system (Linux, macOS, or WSL on Windows)

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
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

Or link it directly:
```bash
gcc -Wall -Wextra -Werror your_file.c libft.a -o your_program
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

## Library Description

### Part 1: Standard C Library Functions

These functions replicate the behavior of their standard library counterparts:

#### Character Classification & Conversion
- **`ft_isalpha`** - Checks if a character is alphabetic
- **`ft_isdigit`** - Checks if a character is a digit
- **`ft_isalnum`** - Checks if a character is alphanumeric
- **`ft_isascii`** - Checks if a character is in the ASCII table
- **`ft_isprint`** - Checks if a character is printable
- **`ft_toupper`** - Converts a character to uppercase
- **`ft_tolower`** - Converts a character to lowercase

#### String Manipulation
- **`ft_strlen`** - Calculates the length of a string
- **`ft_strchr`** - Locates the first occurrence of a character in a string
- **`ft_strrchr`** - Locates the last occurrence of a character in a string
- **`ft_strncmp`** - Compares two strings up to n characters
- **`ft_strnstr`** - Locates a substring within a string (limited by length)
- **`ft_strlcpy`** - Copies a string to a destination buffer (size-bounded)
- **`ft_strlcat`** - Concatenates strings (size-bounded)
- **`ft_strdup`** - Duplicates a string (allocates memory)

#### Memory Operations
- **`ft_memset`** - Fills memory with a constant byte
- **`ft_bzero`** - Sets memory to zero
- **`ft_memcpy`** - Copies memory area
- **`ft_memmove`** - Copies memory area (handles overlapping regions)
- **`ft_memchr`** - Scans memory for a character
- **`ft_memcmp`** - Compares memory areas

#### Conversion & Allocation
- **`ft_atoi`** - Converts a string to an integer
- **`ft_calloc`** - Allocates and zeros memory

### Part 2: Additional Utility Functions

These functions extend the standard library with useful utilities:

#### String Creation & Manipulation
- **`ft_substr`** - Extracts a substring from a string
- **`ft_strjoin`** - Concatenates two strings into a new string
- **`ft_strtrim`** - Trims specified characters from both ends of a string
- **`ft_split`** - Splits a string into an array of strings using a delimiter
- **`ft_itoa`** - Converts an integer to a string

#### Function Application
- **`ft_strmapi`** - Applies a function to each character of a string (creating a new string)
- **`ft_striteri`** - Applies a function to each character of a string (modifying in place)

#### File Descriptor Output
- **`ft_putchar_fd`** - Outputs a character to a file descriptor
- **`ft_putstr_fd`** - Outputs a string to a file descriptor
- **`ft_putendl_fd`** - Outputs a string followed by a newline to a file descriptor
- **`ft_putnbr_fd`** - Outputs an integer to a file descriptor

### Part 3: Bonus - Linked List Functions

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
- **`ft_lstnew`** - Creates a new list element
- **`ft_lstadd_front`** - Adds an element at the beginning of a list
- **`ft_lstadd_back`** - Adds an element at the end of a list
- **`ft_lstsize`** - Counts the number of elements in a list
- **`ft_lstlast`** - Returns the last element of a list
- **`ft_lstdelone`** - Deletes and frees a single list element
- **`ft_lstclear`** - Deletes and frees all elements of a list
- **`ft_lstiter`** - Applies a function to each element of a list
- **`ft_lstmap`** - Creates a new list by applying a function to each element

## Function Categories Summary

| Category | Function Count | Description |
|----------|----------------|-------------|
| Character Operations | 7 | Classification and conversion of characters |
| String Operations | 11 | String manipulation and analysis |
| Memory Operations | 6 | Low-level memory manipulation |
| Conversion | 2 | String-to-integer and integer-to-string |
| Additional Utilities | 10 | Extended string and I/O functions |
| Linked Lists (Bonus) | 9 | Linked list data structure operations |
| **Total** | **45** | **Complete function library** |

## Technical Implementation Notes

### Compilation Flags
The library is compiled with strict flags to ensure code quality:
- `-Wall` - Enables all warning messages
- `-Werror` - Treats warnings as errors
- `-Wextra` - Enables extra warning messages

### Coding Standards
This project adheres to the 42 Network's coding standards (Norminette):
- Maximum 25 lines per function
- Maximum 5 functions per file
- Proper formatting and naming conventions
- No memory leaks
- Proper error handling

### Memory Management
All functions that allocate memory return `NULL` on allocation failure. Users are responsible for freeing allocated memory to prevent memory leaks.

## Resources

### Standard C Library Documentation
- [Linux man pages](https://man7.org/linux/man-pages/) - Complete reference for standard C library functions
- [C Standard Library Reference](https://en.cppreference.com/w/c) - Comprehensive C library documentation
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) - Detailed glibc documentation

### C Programming Fundamentals
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Classic C programming textbook
- [C Memory Management](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/) - Understanding malloc, free, and memory allocation
- [Linked Lists in C](https://www.learn-c.org/en/Linked_lists) - Tutorial on linked list implementation

### 42 Specific Resources
- [42 Norminette](https://github.com/42School/norminette) - Code style checker for 42 projects
- [libft-unit-test](https://github.com/alelievr/libft-unit-test) - Comprehensive test suite for libft
- [libft-tester](https://github.com/Tripouille/libftTester) - Another popular testing framework

### AI Usage in This Project

AI assistance was used in the following ways during this project:

1. **Documentation and README Creation**: AI was used to structure and format this comprehensive README file, ensuring all required sections were included and properly organized according to 42 standards.

2. **Code Review and Debugging**: AI tools were consulted to identify potential edge cases and verify the correctness of function implementations, particularly for memory management and pointer operations.

3. **Understanding Standard Library Behavior**: AI was used to clarify the exact behavior and return values of standard C library functions, especially for edge cases and error conditions.

4. **Optimization Suggestions**: AI provided insights on code efficiency and best practices for C programming, though all final implementations were written and understood by the student.

**Note**: All core function implementations were written by the student. AI was used as a learning aid and documentation tool, not for generating the actual library code.

## Project Status

✅ All mandatory functions implemented  
✅ All bonus functions implemented  
✅ Norminette compliant  
✅ No memory leaks  
✅ Comprehensive testing completed

## Author

- **mahendri** - *42 Student* - mahendri@student.42antananari

## License

This project is part of the 42 curriculum and follows the school's policies regarding code sharing and academic integrity.

---

*Created as part of the 42 Network curriculum - 2026*
