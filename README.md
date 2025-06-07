# Libft

Libft is a custom implementation of the standard C library, developed as a foundational project at Hive Helsinki (https://www.hive.fi/en/). It consists of a comprehensive set of C functions for memory handling, string manipulation, character checking, linked list operations, and a basic version of `printf`.

## 📚 Description

This library was built entirely from scratch — no usage of any C standard library functions (except `write` in some cases). The goal was to deeply understand the internal workings of low-level functions and gain confidence in writing efficient, safe, and modular C code.

## 🛠️ Features

Libft is split into the following functional areas:

### ✅ Libc Functions
Recreations of standard C library functions:
- `ft_atoi`, `ft_bzero`, `ft_calloc`, `ft_is*`, `ft_mem*`, `ft_str*`, `ft_tolower`, `ft_toupper`, etc.

### 🧠 Utility Functions
Custom helper functions:
- `ft_count_words`, `ft_count_hex`, `ft_count_num`, etc.

### 📤 File Descriptor Output
Functions that write to file descriptors:
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 🔗 Bonus – Linked List Operations
A minimal implementation of a singly linked list:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

### 🖨️ Bonus – printf Clone
A simplified version of `printf`:
- `ft_printf`, with support for `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`

## 🧪 Usage

### Clone & Build
git clone https://github.com/yourusername/libft.git
cd libft
make
Include in your C project #include "libft.h" and then compile with libft.a
e.g. gcc main.c libft.a
