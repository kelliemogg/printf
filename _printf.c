#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * format_func - format
 * description: tells _printf how to handle a specifier
 * @z: char being passed
 * @args_list: arg
 * Return: void
 */

void format_func(char z, va_list args_list)
{
	int inner;

	print_stuff arr[] = {
		{'c', char_func},
		{'f', float_func},
		{'i', int_func},
		{'s', string_func},
		{'\0', NULL}
	};

	for (inner = 0; arr[inner].x; inner++)
	{
		if (arr[inner].x == z)
		{
			arr[inner].fun(args_list);
		}
	}
}

/**
 * _printf - const char * const format
 * @format: list of data types passed in as args
 * description: prints anything and everything
 * Return: void
 */
int _printf(const char * const format, ...)
{
	int outer = 0;
	va_list args_list;

	va_start(args_list, format);

	while (format && format[outer])
	{
		if (format[outer] == '%' && format[outer + 1] != '%')
		{
			if (format[outer - 1] != '%')
			{
				outer++;
				format_func(format[outer], args_list);
			}
		}
		else
			_putchar(format[outer]);
		outer++;
	}
	return (0);
}
