#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_stuff - struct with char x and pointer function
 * @x: type x
 * @fun: pointer to func
 * description: struct that prints char x matching pointer function
 */
typedef struct print_stuff
{
	char x;
	int (*fun)();
} print_stuff;

int _printf(const char * const format, ...);
int rev_string(char *s);
int format_func(char z, va_list args_list);
int string_func(va_list args_list);
int char_func(va_list args_list);
int int_func(va_list args_list);
int _putchar(char c);
int _strlen(char *s);
int print_string(char *str);
int print_char(char c);

#endif /* HOLBERTON_H */
