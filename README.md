*This project was created as part of the 42 curriculum by andrsala*

## Description

Libft is a static library in C that centralizes the reimplementation of core functions from the standard `libc`, alongside custom functions optimized for string manipulation, memory management, and linked list processing.
Since many of these functions reference each other, compiling them together into a static library (`libft.a`) automates dependency management and ensures seamless reuse across future projects. 
The primary objective of this project is to deeply understand the underlying mechanics of memory allocation, data structures, and low-level system behavior in C.
There's also a bonus part

## Instructions

1. Clone the repository

```bash
git clone git@vogsphere-v2.42madrid.com:vogsphere/intra-uuid-a085adef-9405-4022-ab9b-b16a6e3deb33-7425983-andrsala
```

2. Compilation

The project includes a `Makefile` that complies with 42 rules (`cc` and `-Wall -Werror -Wextra` in compilation).
To compile the mandatory library functions, run:

```bash
make
```

3. Integration

To use the library in a specific C project, include the header in your code and link the static library during compilation:

```
#include "libft.h"
```

```bash
cc file.c libft.a -o program
```

4. Other Makefile commands

Removes object files
```bash
make clean
```
Removes object files and libft.a 
```bash
make fclean
```
Recompiles everything from scratch
```bash
make re
```

## Resources

### Documentation

[C Library Reference Guide](https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm) – Standard libc function behavior and specifications.

[Understanding Linked Lists in C](https://www.geeksforgeeks.org/dsa/linked-list-data-structure/) – Core concepts of dynamic data structures.

[Linux man pages](https://man7.org/linux/man-pages/dir_all_alphabetic.html) - Detailed descriptions of functions, outputs and parameters.

[Data Types in C](https://www.geeksforgeeks.org/c/data-types-in-c/) - Size and types of data in C.

### AI Usage

In accordance with the instructions and guidelines on AI usage, for this project AI was used primarily to deepen the understanding of linked lists, focusing on pointer syntax, memory management concepts, and data structure behavior.
Additionally, it was used to identify edge cases and validate that each function behaves in accordance with the official documentation and handles errors correctly in specific scenarios.

## Library Functions: Detailed Description

The library is divided into three main parts categorized by their functionality. All functions are prefixed with `ft_` to avoid conflicts with standard libc functions.

### 1. Libc Functions (Standard Reimplementations)
These functions replicate the behavior of the original functions in `<ctype.h>`, `<string.h>`, and `<stdlib.h>`.

* **Character Checks & Conversions:**
  * `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`: Verify character categories.
  * `ft_toupper`, `ft_tolower`: Convert character casing.
* **String Manipulation:**
  * `ft_strlen`: Calculates the length of a string.
  * `ft_strlcpy`: Size-bounded string copying.
  * `ft_strlcat`: Size-bounded string concatenation.
  * `ft_strchr`: Searches for the first occurrence of a character within a string.
  * `ft_strrchr`: Searches for the last occurrence of a character within a string.
  * `ft_strncmp`: Compares two strings up to a specific length.
  * `ft_strnstr`: Locates a substring inside a string with length restriction.
* **Memory Management:**
  * `ft_memset`: Fill memory blocks with a specific byte.
  * `ft_bzero`: Fill memory blocks with zeroes.
  * `ft_memcpy`: Copies a memory area from source to destination.
  * `ft_memmove`: Copy memory areas safely (handling overlaps).
  * `ft_memchr`: Searches for the first occurrence of a byte in a raw memory block up to a specific lenght, regardless of null terminators.
  * `ft_memcmp`: Compares two memory blocks byte by byte up to a specific length, regardless of null terminators.
* **Type Conversion & Allocation:**
  * `ft_atoi`: Converts a string representation of an integer into an actual `int`.
  * `ft_calloc`: Dynamically allocates memory for an array and initializes all bytes to zero.
  * `ft_strdup`: Duplicates an existing string by allocating new heap memory.

### 2. Additional Functions (Custom Utilities)
These functions are not part of the standard libc but are essential tools designed to simplify string extraction, array splitting, and conversions:

* `ft_substr`: Extracts a substring from a given string starting at a specific index.
* `ft_strjoin`: Concatenates two strings into a newly allocated third string.
* `ft_strtrim`: Trims specified characters from the beginning and end of a string.
* `ft_split`: Splices a string into an array of strings using a specific delimiter character.
* `ft_itoa`: Converts an integer value into its string/ascii representation.
* `ft_strmapi`: Apply a function to each character of a string (by index) to create a new transformed string.
* `ft_striteri`: Apply a function to each character of a string (by index) to modify the original string.
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Output characters, strings, lines, or numbers to a specific file descriptor (`fd`).

### 3. Linked List Functions
A custom suite of tools utilizing a dynamic structure (`t_list`) to manipulate linked data nodes efficiently.

* `ft_lstnew`: Initializes and creates a new node structure with a given content.
* `ft_lstadd_front`: Adds a newly created node to the start of the list.
* `ft_lstadd_back`: Adds a newly created node to the end of the list.
* `ft_lstsize`: Counts the total number of elements/nodes present in the list.
* `ft_lstlast`: Traverses the list to return a pointer to the very last node.
* `ft_lstdelone`: Safely deletes a single node and its content, freeing content memory via a function pointer.
* `ft_lstclear`: Safely deletes an entire list, freeing content memory via a function pointer.
* `ft_lstiter`: Iterates through the list, applying a function to the content of each node.
* `ft_lstmap`: Clones a list and applies a transformative function to each node's content, incorporating strict memory allocation safety fallbacks.