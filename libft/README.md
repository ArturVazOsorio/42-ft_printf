*This project has been created as part of the 42 curriculum by aantela-.*
 
# Libft
 
## Description
 
Libft is the very first project of the 42 curriculum. The goal is to reimplement a set of standard C library functions from scratch, building a personal library that will be reused throughout the entire 42 cursus.
 
The project is divided into three parts:
 
- **Part 1** — Reimplementations of standard `libc` functions (string, memory, character classification).
- **Part 2** — Additional utility functions not present in `libc` or existing in a different form.
- **Part 3** — Linked list manipulation functions using a custom `t_list` structure.
- The library is compiled into a static archive `libft.a` that can be linked to any future C project.
 
---
 
## Functions
 
### Part 1 — Libc Functions
 
| Function | Description |
|---|---|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_toupper` | Converts lowercase letter to uppercase |
| `ft_tolower` | Converts uppercase letter to lowercase |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets n bytes of memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Moves memory area (handles overlap) |
| `ft_memchr` | Scans memory for a character |
| `ft_memcmp` | Compares two memory areas |
| `ft_strlcpy` | Copies string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_strchr` | Locates first occurrence of character in string |
| `ft_strrchr` | Locates last occurrence of character in string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strnstr` | Locates a substring within a string |
| `ft_atoi` | Converts string to integer |
| `ft_calloc` | Allocates and initializes memory to zero |
| `ft_strdup` | Duplicates a string |
 
### Part 2 — Additional Functions
 
| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from start and end of string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string |
| `ft_striteri` | Applies a function to each character (by address) |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |
 
### Part 3 — Linked List Functions
 
The following functions use this structure:
 
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```
 
| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Deletes a single node using a given function |
| `ft_lstclear` | Deletes and frees all nodes of the list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |
 
---
 
## Instructions
 
### Compilation
 
```bash
make        # Compiles the library into libft.a
make clean  # Removes object files
make fclean # Removes object files and libft.a
make re     # Full rebuild
```
 
### Usage
 
Include the header and link the library in your project:
 
```c
#include "libft.h"
```
 
Compile with(both forms are valid):
 
```bash
# Linking the archive directly.
cc -Wall -Wextra -Werror your_file.c libft.a

# Using -L and -lft flags
cc -Wall -Wextra -Werror your_file.c -L. -lft
```
 
### Example
 
```c
#include "libft.h"
#include <stdio.h>
 
int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    printf("%s\n", str);
    free(str);
    return (0);
}
```
 
---
 
## Resources
 
### References
 
- [C Standard Library Reference](https://en.cppreference.com/w/c)
- [Linux man pages](https://man7.org/linux/man-pages/)
- [42 Norminette](https://github.com/42School/norminette)
- [francinette — libft tester](https://github.com/xicodomingues/francinette)
### AI Usage
 
AI (Claude by Anthropic) was used during the development of **Part 3 (linked list functions)** as a learning support tool. 
Specifically:
 
- AI was used to help understand concepts such as pointer-to-pointer (`t_list **`), function pointers (`void (*del)(void *)`), and memory management in linked lists.
- AI guided the learning process through questions and hints rather than providing direct answers, following the 42 AI usage guidelines.
- **README.md** — AI (Claude) was used to help structure and write this README file, following the subject requirements.
- All code was written and understood by the student. AI was never used to generate code directly.

