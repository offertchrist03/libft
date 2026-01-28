# Libft Test Suite - Complete and Tested

This package contains **31 comprehensive test programs** for all libft functions.
All tests have been compiled and verified to work correctly.

## 📁 Contents

- **31 test programs** (one for each function/group)
- **all_functions.c** - Single file containing all your libft functions
- **libft.h** - Header file
- **Makefile** - Automated build system
- **README.md** - This file

## 🚀 Quick Start

### Step 1: Prepare Your Source Files

**Option A: If you have individual .c files (ft_atoi.c, ft_strlen.c, etc.):**
```bash
# Your directory structure should be:
# my-libft/
#   ├── ft_atoi.c
#   ├── ft_strlen.c
#   ├── ... (all other .c files)
#   └── libft.h
#
# libft_tests/
#   ├── all test files...
#   └── Makefile (modify this - see below)
```

Edit the Makefile and change line 7 to:
```makefile
LIBFT_SRC = $(wildcard ../my-libft/*.c)
```

And add this to CFLAGS (line 3):
```makefile
CFLAGS = -Wall -Wextra -Werror -I. -I../my-libft
```

**Option B: If you have a single concatenated file:**
```bash
# Copy or rename your file to all_functions.c
cp ../my-libft/_f ./all_functions.c
# Or if it's already named differently:
mv your_libft_file.c all_functions.c
```

The Makefile is already configured for this option - no changes needed!

### Step 2: Compile All Tests
```bash
make
```

This compiles all 31 test programs.

### Step 3: Run All Tests
```bash
make test
```

This runs all tests sequentially and shows results.

### Step 4: Run Individual Tests
```bash
./atoi_main
./strlen_main
./memcpy_main
# ... etc
```

Or use the Makefile:
```bash
make run_atoi
make run_strlen
```

## 📋 Test Programs Included

### Character Classification (7 tests)
- ✅ `isalpha_main` - ft_isalpha
- ✅ `isdigit_main` - ft_isdigit
- ✅ `isalnum_main` - ft_isalnum
- ✅ `isascii_main` - ft_isascii
- ✅ `isprint_main` - ft_isprint
- ✅ `toupper_main` - ft_toupper
- ✅ `tolower_main` - ft_tolower

### String Functions (8 tests)
- ✅ `strlen_main` - ft_strlen
- ✅ `strchr_main` - ft_strchr
- ✅ `strrchr_main` - ft_strrchr
- ✅ `strncmp_main` - ft_strncmp
- ✅ `strnstr_main` - ft_strnstr
- ✅ `strdup_main` - ft_strdup
- ✅ `strlcpy_main` - ft_strlcpy
- ✅ `strlcat_main` - ft_strlcat

### Memory Functions (7 tests)
- ✅ `memset_main` - ft_memset
- ✅ `bzero_main` - ft_bzero
- ✅ `memcpy_main` - ft_memcpy
- ✅ `memmove_main` - ft_memmove
- ✅ `memchr_main` - ft_memchr
- ✅ `memcmp_main` - ft_memcmp
- ✅ `calloc_main` - ft_calloc

### Conversion Functions (2 tests)
- ✅ `atoi_main` - ft_atoi
- ✅ `itoa_main` - ft_itoa

### Additional String Functions (7 tests)
- ✅ `substr_main` - ft_substr
- ✅ `strjoin_main` - ft_strjoin
- ✅ `strtrim_main` - ft_strtrim
- ✅ `split_main` - ft_split
- ✅ `strmapi_main` - ft_strmapi
- ✅ `striteri_main` - ft_striteri
- ✅ `put_main` - ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

## 🔍 What Each Test Does

Each test:
1. **Compares** your ft_* function with the standard C library function (when available)
2. **Shows** input values, expected output, and actual output
3. **Indicates** pass/fail with ✓ or ✗
4. **Tests** multiple cases including edge cases

## 📊 Example Output

```
=== ft_strlen vs strlen ===

Test 1: "Hello World!"
Match: ✓

Test 2: Empty string
Match: ✓

Test 3: Single char
Match: ✓
```

## 🛠️ Makefile Commands

```bash
make          # Compile all tests
make test     # Compile and run all tests
make clean    # Remove all executables
make run_atoi # Run specific test (any function name)
```

## ⚙️ Compilation

All tests compile with:
```bash
gcc -Wall -Wextra -Werror -I. your_test.c all_functions.c -o your_test
```

## 🐛 Troubleshooting

### "No such file or directory" error
- Make sure `all_functions.c` and `libft.h` are in the same directory as the test files
- Or adjust the Makefile to point to your libft source files

### Compilation errors
- Ensure your functions match the prototypes in `libft.h`
- Check that all functions are implemented

### Tests fail
- Compare the output carefully - your function might have a subtle bug
- Check edge cases (NULL pointers, empty strings, zero values)

## 📝 Notes

- Tests marked with "vs" compare against standard library functions
- Some tests create files (like `test_output.txt`) which are cleaned with `make clean`
- All tests are self-contained and don't require interaction

## ✅ Verification

All 31 test programs have been:
- ✅ Compiled successfully with `-Wall -Wextra -Werror`
- ✅ Tested against the provided libft implementation
- ✅ Verified to produce correct output

## 💡 Tips

1. Run `make test` first to see all results at once
2. If a test fails, run it individually to see detailed output
3. Use the comparison with standard functions to understand expected behavior
4. Check edge cases carefully - they often reveal subtle bugs

## 📄 License

These tests are provided for educational purposes.

---
**Created**: January 2026  
**Total Tests**: 31  
**Functions Tested**: All mandatory libft functions
