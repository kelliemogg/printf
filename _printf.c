#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - const char * const format
 * @format: list of data types passed in as args
 * description: prints anything and everything
 * Return: void
 */
int _printf(const char * const format, ...)
{
	int outer = 0;
	int inner = 0;
	va_list args_list;
	char *comma = "";
	print_stuff arr[] = {
		{'c', char_func},
		{'f', float_func},
		{'i', int_func},
		{'s', string_func},
		{'\0', NULL}
	};

	va_start(args_list, format);

	while (format && format[outer])
	{
		if (format[inner] == %)
		{
			for (inner == 0; arr[inner]; index++)
			{
				if (format[inner] == arr[outer].x)
				{
					arr[inner].fun(args_list);
					outer++;
				}
				else
					_putchar(format[inner]);
			}
		}
	}
	return (0);
}