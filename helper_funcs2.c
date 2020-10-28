#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>


/**
 * float_func - float
 * description: float fun
 * @args_list: arg passed
 * Return: void
 */
void float_func(va_list args_list)
{
	print_char(va_arg(args_list, double));
}
/**
 * int_func - prints float number
 * @args_list: arg list
 * Return: void
 */

void int_func(va_list args_list)
{
	print_char(va_arg(args_list, double));
}

/**
 * string_func - string
 * @args_list: args list
 * Return: void
 */
void string_func(va_list args_list)
{
	char *string;

	string = va_arg(args_list, char *);

	if (!string)
	{
		string = "(nil)";
	}
	print_string(string);
}

/**
 * rev_string - reverse that string
 * description: reverse it
 * @s: variable
 * Return: 0
 */

void rev_string(char *s)
{
	int x;
	int y;
	int z = (_strlen(s) - 1);

	for (y = 0, x = z; y < x; y++, x--)
	{
		int z = s[y];

		s[y] = s[x];
		s[x] = z;
	}
	print_string(s);
}
