*This project has been created as part of the 42 curriculum by amendibi.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum.
The goal of this project is to recreate essential standard C library functions and to implement additional utility functions that will be reused throughout future projects.

This project focuses on strengthening core programming skills such as memory management, string manipulation, data structures (linked lists), code organization, and reusability.

## Instructions

### Compilation

To compile the library, run:

`make`

This will generate the static library file `libft.a`.

### Cleaning

Remove object files:
`make clean`

Remove object files and the library:
`make fclean`

Recompile everything:
`make re`

## Usage

Include the header file in your source code:

`#include "libft.h"`

Compile your program with the library:

`gcc your_file.c libft.a`

### Implemented Functions

#### Character Checks and Conversions
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

#### String Manipulation
`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`

#### Memory Management
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

#### Conversions
`ft_atoi`, `ft_itoa`

#### File Descriptor Output
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Linked List Operations
`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`


## Technical Choices

- Written entirely in C
- Fully compliant with the 42 Norm
- No forbidden functions were used
- Careful memory management to prevent leaks
- Compiled as a static library for reuse in future projects

## Resources

### References
Manual pages, and the 42 project subject.


## Author

**amendibi** – 42 Student, Urduliz
