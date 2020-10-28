#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * int_func - prints float number
 * @args_list: arg list
 * Return: void
 */

int int_func(va_list args_list)
{
	return (print_char(va_arg(args_list, int)));
}

/**
 * string_func - string
 * @args_list: args list
 * Return: void
 */
int string_func(va_list args_list)
{
	char *string;

	string = va_arg(args_list, char *);

	if (!string)
	{
		string = "(null)";
	}
	return (print_string(string));
}

/**
 * rev_string - reverse that string
 * description: reverse it
 * @s: variable
 * Return: 0
 */

int rev_string(char *s)
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
	return (print_string(s));
}
