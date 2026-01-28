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

## Detailed Function Reference

This section provides comprehensive explanations for each function, including parameters, return values, external functions used, and important conditions.

### Part 1: Standard C Library Functions

#### Character Classification & Conversion Functions

---

##### `ft_isalpha`
```c
int ft_isalpha(int c);
```
**Description**: Checks whether the given character is an alphabetic letter.

**Parameters**:
- `c`: The character to test (passed as int, typically an ASCII value)

**Return Value**:
- Returns `1` if the character is alphabetic (A-Z or a-z)
- Returns `0` otherwise

**External Functions**: None

**Conditions**:
- Accepts both uppercase (65-90) and lowercase (97-122) letters
- Works with ASCII values
- Non-alphabetic characters return 0

---

##### `ft_isdigit`
```c
int ft_isdigit(int c);
```
**Description**: Checks whether the given character is a decimal digit.

**Parameters**:
- `c`: The character to test

**Return Value**:
- Returns `1` if the character is a digit (0-9)
- Returns `0` otherwise

**External Functions**: None

**Conditions**:
- Only recognizes ASCII digits '0' through '9' (48-57)
- Does not recognize digits from other character sets

---

##### `ft_isalnum`
```c
int ft_isalnum(int c);
```
**Description**: Checks whether the given character is alphanumeric.

**Parameters**:
- `c`: The character to test

**Return Value**:
- Returns `1` if the character is alphabetic or numeric
- Returns `0` otherwise

**External Functions**: None

**Conditions**:
- Combines the checks of `ft_isalpha` and `ft_isdigit`
- Returns true for A-Z, a-z, and 0-9

---

##### `ft_isascii`
```c
int ft_isascii(unsigned char c);
```
**Description**: Checks whether the given character is in the ASCII character set.

**Parameters**:
- `c`: The character to test (unsigned char)

**Return Value**:
- Returns `1` if the character value is between 0 and 127 (inclusive)
- Returns `0` otherwise

**External Functions**: None

**Conditions**:
- ASCII table ranges from 0 to 127
- Extended ASCII (128-255) returns 0

---

##### `ft_isprint`
```c
int ft_isprint(int c);
```
**Description**: Checks whether the given character is printable.

**Parameters**:
- `c`: The character to test

**Return Value**:
- Returns `1` if the character is printable (including space)
- Returns `0` otherwise

**External Functions**: None

**Conditions**:
- Printable characters range from 32 (space) to 126 (~)
- Control characters and DEL (127) are not printable

---

##### `ft_toupper`
```c
int ft_toupper(int c);
```
**Description**: Converts a lowercase letter to uppercase.

**Parameters**:
- `c`: The character to convert

**Return Value**:
- Returns the uppercase equivalent if `c` is a lowercase letter
- Returns `c` unchanged otherwise

**External Functions**: None

**Conditions**:
- Only converts lowercase letters (a-z)
- Other characters remain unchanged
- Does not modify the original character

---

##### `ft_tolower`
```c
int ft_tolower(int c);
```
**Description**: Converts an uppercase letter to lowercase.

**Parameters**:
- `c`: The character to convert

**Return Value**:
- Returns the lowercase equivalent if `c` is an uppercase letter
- Returns `c` unchanged otherwise

**External Functions**: None

**Conditions**:
- Only converts uppercase letters (A-Z)
- Other characters remain unchanged
- Does not modify the original character

---

#### String Manipulation Functions

---

##### `ft_strlen`
```c
size_t ft_strlen(const char *s);
```
**Description**: Calculates the length of a string.

**Parameters**:
- `s`: The string to measure

**Return Value**:
- Returns the number of characters before the null terminator
- Returns 0 for empty strings

**External Functions**: None

**Conditions**:
- The string must be null-terminated
- Does not count the null terminator itself
- Undefined behavior if `s` is NULL

---

##### `ft_strchr`
```c
char *ft_strchr(const char *s, int c);
```
**Description**: Locates the first occurrence of a character in a string.

**Parameters**:
- `s`: The string to search
- `c`: The character to find (passed as int, converted to char)

**Return Value**:
- Returns a pointer to the first occurrence of `c` in `s`
- Returns a pointer to the null terminator if `c` is '\0'
- Returns `NULL` if the character is not found

**External Functions**: None

**Conditions**:
- Searches up to and including the null terminator
- Can find the null terminator itself
- Returns pointer to the character within the original string

---

##### `ft_strrchr`
```c
char *ft_strrchr(const char *s, int c);
```
**Description**: Locates the last occurrence of a character in a string.

**Parameters**:
- `s`: The string to search
- `c`: The character to find

**Return Value**:
- Returns a pointer to the last occurrence of `c` in `s`
- Returns a pointer to the null terminator if `c` is '\0'
- Returns `NULL` if the character is not found

**External Functions**: None

**Conditions**:
- Searches the entire string including the null terminator
- Searches backwards conceptually (finds the last occurrence)
- Returns pointer to the character within the original string

---

##### `ft_strncmp`
```c
int ft_strncmp(const char *s1, const char *s2, size_t n);
```
**Description**: Compares two strings up to n characters.

**Parameters**:
- `s1`: The first string
- `s2`: The second string
- `n`: Maximum number of characters to compare

**Return Value**:
- Returns `0` if the strings are equal
- Returns a positive value if `s1` > `s2`
- Returns a negative value if `s1` < `s2`
- Returns `0` if `n` is 0

**External Functions**: None

**Conditions**:
- Comparison stops at the first difference or after `n` characters
- Compares unsigned character values
- If one string ends before `n` characters, the null terminator is compared

---

##### `ft_strnstr`
```c
char *ft_strnstr(const char *big, const char *little, size_t len);
```
**Description**: Locates a substring within a string, searching up to len characters.

**Parameters**:
- `big`: The string to search in
- `little`: The substring to find
- `len`: Maximum number of characters to search

**Return Value**:
- Returns a pointer to the first character of the first occurrence of `little` in `big`
- Returns `big` if `little` is an empty string
- Returns `NULL` if `little` is not found within the first `len` characters

**External Functions**: `ft_strlen`

**Conditions**:
- Only searches within the first `len` characters of `big`
- The entire `little` string must fit within `len` characters
- Returns pointer within the original `big` string

---

##### `ft_strlcpy`
```c
size_t ft_strlcpy(char *dst, const char *src, size_t size);
```
**Description**: Copies a string to a destination buffer with size limitation.

**Parameters**:
- `dst`: The destination buffer
- `src`: The source string
- `size`: The size of the destination buffer

**Return Value**:
- Returns the total length of `src`
- This allows detection of truncation (return value >= size)

**External Functions**: `ft_strlen`

**Conditions**:
- Guarantees null-termination if `size` > 0
- Copies at most `size - 1` characters
- If `size` is 0, nothing is copied but the length of `src` is still returned
- More secure than `strcpy` as it prevents buffer overflow

---

##### `ft_strlcat`
```c
size_t ft_strlcat(char *dst, const char *src, size_t size);
```
**Description**: Concatenates strings with size limitation.

**Parameters**:
- `dst`: The destination buffer (must contain a null-terminated string)
- `src`: The source string to append
- `size`: The total size of the destination buffer

**Return Value**:
- Returns the total length of the string it tried to create
- Returns `initial dst length + src length`

**External Functions**: `ft_strlen`

**Conditions**:
- Appends `src` to `dst`, ensuring null-termination
- Appends at most `size - strlen(dst) - 1` characters
- The destination buffer must be large enough to hold the result
- If `size` <= initial length of `dst`, no concatenation occurs

---

##### `ft_strdup`
```c
char *ft_strdup(const char *str);
```
**Description**: Creates a duplicate of a string with dynamic memory allocation.

**Parameters**:
- `str`: The string to duplicate

**Return Value**:
- Returns a pointer to the newly allocated duplicate string
- Returns `NULL` if allocation fails
- Returns `NULL` if `str` is NULL

**External Functions**: `malloc`, `ft_strlen`

**Conditions**:
- Allocates memory using `malloc` (must be freed by caller)
- Allocates `strlen(str) + 1` bytes for the null terminator
- The returned string is an independent copy

---

#### Memory Operation Functions

---

##### `ft_memset`
```c
void *ft_memset(void *s, int c, unsigned int n);
```
**Description**: Fills a block of memory with a specific byte value.

**Parameters**:
- `s`: Pointer to the memory area
- `c`: The byte value to set (converted to unsigned char)
- `n`: Number of bytes to set

**Return Value**:
- Returns a pointer to the memory area `s`

**External Functions**: None

**Conditions**:
- Fills the first `n` bytes of `s` with the constant byte `c`
- Works with any type of memory (not just strings)
- Often used to initialize memory to zero or another value

---

##### `ft_bzero`
```c
void ft_bzero(void *s, size_t n);
```
**Description**: Sets a block of memory to zero.

**Parameters**:
- `s`: Pointer to the memory area
- `n`: Number of bytes to set to zero

**Return Value**: None (void function)

**External Functions**: None

**Conditions**:
- Sets the first `n` bytes of `s` to zero
- Equivalent to `ft_memset(s, 0, n)`
- Commonly used to initialize structures and buffers

---

##### `ft_memcpy`
```c
void *ft_memcpy(void *dest, const void *src, size_t n);
```
**Description**: Copies a block of memory from source to destination.

**Parameters**:
- `dest`: Pointer to the destination memory area
- `src`: Pointer to the source memory area
- `n`: Number of bytes to copy

**Return Value**:
- Returns a pointer to `dest`

**External Functions**: None

**Conditions**:
- Copies `n` bytes from `src` to `dest`
- Does not handle overlapping memory regions (use `ft_memmove` for that)
- Undefined behavior if `src` and `dest` overlap
- Works with any type of data, not just strings

---

##### `ft_memmove`
```c
void *ft_memmove(void *dest, const void *src, size_t n);
```
**Description**: Copies memory from source to destination, handling overlapping regions.

**Parameters**:
- `dest`: Pointer to the destination memory area
- `src`: Pointer to the source memory area
- `n`: Number of bytes to copy

**Return Value**:
- Returns a pointer to `dest`

**External Functions**: None

**Conditions**:
- Safely handles overlapping memory regions
- Copies backwards if necessary to prevent data corruption
- If `dest` > `src`, copies from end to beginning
- If `dest` < `src`, copies from beginning to end

---

##### `ft_memchr`
```c
void *ft_memchr(const void *s, int c, size_t n);
```
**Description**: Scans memory for the first occurrence of a byte.

**Parameters**:
- `s`: Pointer to the memory area
- `c`: The byte value to search for (converted to unsigned char)
- `n`: Number of bytes to scan

**Return Value**:
- Returns a pointer to the first occurrence of `c` in the memory area
- Returns `NULL` if `c` is not found within the first `n` bytes

**External Functions**: None

**Conditions**:
- Searches only the first `n` bytes
- Treats memory as an array of unsigned chars
- Handles values >= 256 by taking modulo 256

---

##### `ft_memcmp`
```c
int ft_memcmp(const void *s1, const void *s2, size_t n);
```
**Description**: Compares two blocks of memory.

**Parameters**:
- `s1`: Pointer to the first memory area
- `s2`: Pointer to the second memory area
- `n`: Number of bytes to compare

**Return Value**:
- Returns `0` if the memory areas are equal
- Returns a positive value if `s1` > `s2`
- Returns a negative value if `s1` < `s2`
- Returns `0` if `n` is 0

**External Functions**: None

**Conditions**:
- Compares byte by byte as unsigned chars
- Stops at the first difference or after `n` bytes
- Does not stop at null terminators (unlike string comparison)

---

#### Conversion & Allocation Functions

---

##### `ft_atoi`
```c
int ft_atoi(const char *nptr);
```
**Description**: Converts a string to an integer.

**Parameters**:
- `nptr`: The string to convert

**Return Value**:
- Returns the converted integer value
- Returns 0 if no valid conversion could be performed

**External Functions**: `ft_isdigit`

**Conditions**:
- Skips leading whitespace characters (space, tab, newline, etc.)
- Handles optional '+' or '-' sign
- Stops conversion at the first non-digit character
- Does not handle overflow/underflow (returns truncated value)
- Accepts: spaces (32), tab (9), newline (10), vertical tab (11), form feed (12), carriage return (13)

---

##### `ft_calloc`
```c
void *ft_calloc(size_t number, size_t size);
```
**Description**: Allocates memory for an array and initializes it to zero.

**Parameters**:
- `number`: Number of elements
- `size`: Size of each element in bytes

**Return Value**:
- Returns a pointer to the allocated memory
- Returns `NULL` if allocation fails
- Returns a pointer to an empty string if one parameter is 0 and the other is negative (edge case handling)
- Returns `NULL` if parameters are invalid (both negative)

**External Functions**: `malloc`, `ft_bzero`, `ft_strdup`

**Conditions**:
- Allocates `number * size` bytes
- Initializes all bytes to zero using `ft_bzero`
- The caller is responsible for freeing the allocated memory
- Handles edge cases with negative values (converted from size_t)

---

### Part 2: Additional Utility Functions

#### String Creation & Manipulation Functions

---

##### `ft_substr`
```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```
**Description**: Extracts a substring from a string.

**Parameters**:
- `s`: The source string
- `start`: The starting index in the string
- `len`: The maximum length of the substring

**Return Value**:
- Returns a pointer to the newly allocated substring
- Returns an empty string if `start` is beyond the string length
- Returns `NULL` if allocation fails or if `s` is NULL

**External Functions**: `malloc`, `ft_strlen`, `ft_strdup`

**Conditions**:
- Allocates memory for the substring (must be freed by caller)
- If `start` >= string length, returns an empty string
- If `len` exceeds available characters, adjusts to actual length
- The returned string is null-terminated

---

##### `ft_strjoin`
```c
char *ft_strjoin(char const *s1, char const *s2);
```
**Description**: Concatenates two strings into a new string.

**Parameters**:
- `s1`: The first string
- `s2`: The second string to append

**Return Value**:
- Returns a pointer to the newly allocated concatenated string
- Returns `NULL` if allocation fails or if either parameter is NULL

**External Functions**: `malloc`, `ft_strlen`, `ft_strlcat`

**Conditions**:
- Allocates memory for the result (must be freed by caller)
- Allocates exactly `strlen(s1) + strlen(s2) + 1` bytes
- Does not modify the original strings
- Returns NULL if either input is NULL

---

##### `ft_strtrim`
```c
char *ft_strtrim(char const *s1, char const *set);
```
**Description**: Removes specified characters from both ends of a string.

**Parameters**:
- `s1`: The string to trim
- `set`: The set of characters to remove

**Return Value**:
- Returns a pointer to the newly allocated trimmed string
- Returns an empty string if the entire string consists of characters from `set`
- Returns `NULL` if allocation fails or if either parameter is NULL

**External Functions**: `malloc`, `ft_strlen`, `ft_strdup`

**Conditions**:
- Removes characters from the beginning and end only (not the middle)
- Allocates memory for the result (must be freed by caller)
- If `s1` is empty, returns an empty string
- Uses helper functions: `in_set`, `index_start`, `index_end`

---

##### `ft_split`
```c
char **ft_split(char const *s, char c);
```
**Description**: Splits a string into an array of strings using a delimiter.

**Parameters**:
- `s`: The string to split
- `c`: The delimiter character

**Return Value**:
- Returns an array of strings (NULL-terminated array)
- Returns `NULL` if allocation fails
- Returns an array with NULL if the string is empty

**External Functions**: `malloc`, `ft_substr`, `ft_strlen`

**Conditions**:
- Allocates memory for the array and each substring (all must be freed by caller)
- Consecutive delimiters are treated as one
- The returned array is NULL-terminated
- Uses helper functions: `word_count`, `word_len`, `free_arr`
- If any substring allocation fails, all previously allocated memory is freed

---

##### `ft_itoa`
```c
char *ft_itoa(int n);
```
**Description**: Converts an integer to a string.

**Parameters**:
- `n`: The integer to convert

**Return Value**:
- Returns a pointer to the string representing the integer
- Returns `NULL` if allocation fails

**External Functions**: `malloc`

**Conditions**:
- Handles negative numbers (prepends '-')
- Handles INT_MIN (-2147483648) correctly
- Allocates memory for the result (must be freed by caller)
- Uses helper function: `ft_number_len`, `do_itoa`
- The returned string is null-terminated

---

#### Function Application Functions

---

##### `ft_strmapi`
```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
**Description**: Applies a function to each character of a string, creating a new string.

**Parameters**:
- `s`: The string to iterate over
- `f`: The function to apply to each character (receives index and character)

**Return Value**:
- Returns a pointer to the newly created string
- Returns `NULL` if allocation fails

**External Functions**: `malloc`, `ft_strlen`

**Conditions**:
- Allocates memory for the new string (must be freed by caller)
- The function `f` receives the index and the character
- Does not modify the original string
- The returned string has the same length as the input

---

##### `ft_striteri`
```c
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```
**Description**: Applies a function to each character of a string (in place).

**Parameters**:
- `s`: The string to iterate over
- `f`: The function to apply to each character (receives index and pointer to character)

**Return Value**: None (void function)

**External Functions**: `ft_strlen`

**Conditions**:
- Modifies the original string in place
- The function `f` receives the index and a pointer to the character
- The function can modify the character through the pointer
- No memory allocation is performed

---

#### File Descriptor Output Functions

---

##### `ft_putchar_fd`
```c
void ft_putchar_fd(char c, int fd);
```
**Description**: Outputs a character to a file descriptor.

**Parameters**:
- `c`: The character to output
- `fd`: The file descriptor (0=stdin, 1=stdout, 2=stderr, or any open file)

**Return Value**: None (void function)

**External Functions**: `write`

**Conditions**:
- Uses the `write` system call
- Writes exactly 1 byte
- Common file descriptors: 1 (stdout), 2 (stderr)
- No error checking is performed

---

##### `ft_putstr_fd`
```c
void ft_putstr_fd(char *s, int fd);
```
**Description**: Outputs a string to a file descriptor.

**Parameters**:
- `s`: The string to output
- `fd`: The file descriptor

**Return Value**: None (void function)

**External Functions**: `ft_putchar_fd`, `ft_strlen`

**Conditions**:
- Writes each character of the string using `ft_putchar_fd`
- Does not output the null terminator
- Does not add a newline at the end
- No error checking for NULL string

---

##### `ft_putendl_fd`
```c
void ft_putendl_fd(char *s, int fd);
```
**Description**: Outputs a string followed by a newline to a file descriptor.

**Parameters**:
- `s`: The string to output
- `fd`: The file descriptor

**Return Value**: None (void function)

**External Functions**: `ft_putchar_fd`, `ft_strlen`

**Conditions**:
- Similar to `ft_putstr_fd` but adds '\n' at the end
- Useful for printing lines of text
- The newline is always added, even for empty strings

---

##### `ft_putnbr_fd`
```c
void ft_putnbr_fd(int n, int fd);
```
**Description**: Outputs an integer to a file descriptor.

**Parameters**:
- `n`: The integer to output
- `fd`: The file descriptor

**Return Value**: None (void function)

**External Functions**: `ft_putchar_fd`

**Conditions**:
- Handles negative numbers (outputs '-' first)
- Handles INT_MIN (-2147483648) correctly
- Uses recursion for multi-digit numbers
- Outputs the number as a string of digits

---

### Part 3: Bonus - Linked List Functions

#### Linked List Structure
```c
typedef struct s_list
{
    void            *content;  // Pointer to the data
    struct s_list   *next;     // Pointer to the next element
}                   t_list;
```

---

##### `ft_lstnew`
```c
t_list *ft_lstnew(void *content);
```
**Description**: Creates a new list element.

**Parameters**:
- `content`: The data to store in the element

**Return Value**:
- Returns a pointer to the new element
- Returns `NULL` if allocation fails or if `content` is NULL

**External Functions**: `malloc`

**Conditions**:
- Allocates memory for the new element (must be freed by caller)
- Sets `next` to NULL
- Does not copy the content, only stores the pointer
- Returns NULL if content is NULL (custom behavior)

---

##### `ft_lstadd_front`
```c
void ft_lstadd_front(t_list **lst, t_list *new);
```
**Description**: Adds an element at the beginning of a list.

**Parameters**:
- `lst`: The address of a pointer to the first element
- `new`: The element to add

**Return Value**: None (void function)

**External Functions**: None

**Conditions**:
- Updates the `next` pointer of `new` to point to the old first element
- Updates `*lst` to point to `new`
- If either parameter is NULL, does nothing
- Handles empty lists (when `*lst` is NULL)

---

##### `ft_lstadd_back`
```c
void ft_lstadd_back(t_list **lst, t_list *new);
```
**Description**: Adds an element at the end of a list.

**Parameters**:
- `lst`: The address of a pointer to the first element
- `new`: The element to add

**Return Value**: None (void function)

**External Functions**: None

**Conditions**:
- If the list is empty, sets `*lst` to `new`
- Otherwise, traverses to the last element and updates its `next` pointer
- If either parameter is NULL, does nothing

---

##### `ft_lstsize`
```c
int ft_lstsize(t_list *lst);
```
**Description**: Counts the number of elements in a list.

**Parameters**:
- `lst`: The beginning of the list

**Return Value**:
- Returns the number of elements in the list
- Returns 0 if the list is empty or NULL

**External Functions**: None

**Conditions**:
- Traverses the entire list
- Does not modify the list
- Handles NULL input gracefully

---

##### `ft_lstlast`
```c
t_list *ft_lstlast(t_list *lst);
```
**Description**: Returns the last element of a list.

**Parameters**:
- `lst`: The beginning of the list

**Return Value**:
- Returns a pointer to the last element
- Returns `NULL` if the list is empty

**External Functions**: None

**Conditions**:
- Traverses the entire list
- Does not modify the list
- Returns the element whose `next` pointer is NULL

---

##### `ft_lstdelone`
```c
void ft_lstdelone(t_list *lst, void (*del)(void *));
```
**Description**: Deletes and frees a single list element.

**Parameters**:
- `lst`: The element to delete
- `del`: The function to delete the content

**Return Value**: None (void function)

**External Functions**: `free`

**Conditions**:
- Calls `del` on the content to free it properly
- Frees the element itself using `free`
- Does not update any pointers (caller must handle list structure)
- If either parameter is NULL, does nothing

---

##### `ft_lstclear`
```c
void ft_lstclear(t_list **lst, void (*del)(void *));
```
**Description**: Deletes and frees all elements of a list.

**Parameters**:
- `lst`: The address of a pointer to the first element
- `del`: The function to delete the content of each element

**Return Value**: None (void function)

**External Functions**: `ft_lstdelone`, `free`

**Conditions**:
- Iterates through the entire list
- Deletes each element using `ft_lstdelone`
- Sets `*lst` to NULL after clearing
- If either parameter is NULL, does nothing
- Must save the next pointer before deleting each element

---

##### `ft_lstiter`
```c
void ft_lstiter(t_list *lst, void (*f)(void *));
```
**Description**: Applies a function to the content of each element.

**Parameters**:
- `lst`: The beginning of the list
- `f`: The function to apply to each element's content

**Return Value**: None (void function)

**External Functions**: None

**Conditions**:
- Iterates through the entire list
- Applies `f` to the content of each element
- Does not modify the list structure
- If either parameter is NULL, does nothing

---

##### `ft_lstmap`
```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
**Description**: Creates a new list by applying a function to each element.

**Parameters**:
- `lst`: The beginning of the list to iterate over
- `f`: The function to apply to each element's content
- `del`: The function to delete content if allocation fails

**Return Value**:
- Returns a pointer to the new list
- Returns `NULL` if allocation fails or if any parameter is NULL

**External Functions**: `ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`

**Conditions**:
- Creates a completely new list (does not modify the original)
- Allocates memory for each new element (must be freed by caller)
- If any allocation fails, clears the new list and returns NULL
- Applies `f` to each element's content to create the new content
- The new list has the same structure as the original

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
