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
	void (*fun)();
} print_stuff;

int _printf(const char * const format, ...);
void string_func(va_list args_list);
void char_func(va_list args_list);
void int_func(va_list args_list);
void string_func(va_list args_list);
void float_func(va_list args_list);
int _putchar(char c);

#endif /* HOLBERTON_H */
