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

int format_func(char z, va_list args_list)
{
	int inner;

	print_stuff arr[] = {
		{'c', char_func},
		{'d', int_func},
		{'i', int_func},
		{'s', string_func},
		{'r', rev_string},
		{'\0', NULL}
	};

	for (inner = 0; arr[inner].x; inner++)
	{
		if (arr[inner].x == z)
		{
			return (arr[inner].fun(args_list));
		}
	}
	return (0);
}

/**
 * _printf - const char * const format
 * @format: list of data types passed in as args
 * description: prints anything and everything
 * Return: void
 */
int _printf(const char * const format, ...)
{
	int counter = 0;
	int outer = 0;
	va_list args_list;

	if (format == NULL)
		return (-1);
	va_start(args_list, format);

	while (format && format[outer])
	{
		if (format[outer] != '%')
		{
			_putchar(format[outer]);
			counter++;
		}
		if (format[outer] == '%' && format[outer + 1] == '%')
		{
			outer++;
			counter += _putchar(format[outer]);
		}
		else if (format[outer] == '%' && format[outer + 1] != '%')
		{
			outer++;
			counter += format_func(format[outer], args_list);
			/* if (format[outer - 1] != '%')
			{
				outer++;
				format_func(format[outer], args_list);
				counter++;
				}*/
		}
		/* else
		{
			counter++;
			_putchar(format[outer]);
			}*/
		outer++;
	}
	va_end(args_list);
	return (counter);
}
