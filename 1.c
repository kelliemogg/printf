#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * char_func - prints char
 * @args_list: argument list
 * Return: void
 */
void char_func(va_list args_list)
{
	printf("%c", va_arg(args_list, int));
}

/**
 * float_func - prints float number
 * @args_list: argument list
 * Return: void
 */
void float_func(va_list args_list)
{
	printf("%f", va_arg(args_list, double));
}

/**
 * int_func - prints float number
 * @args_list: argument list
 * Return: void
 */
void int_func(va_list args_list)
{
	printf("%i", va_arg(args_list, int));
}
/**
 * string_func - prints float number
 * @args_list: argument list
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
	printf("%s", string);
}
/**
 * print_all - const char * const format
 * @format: list of data types passed in as args
 * description: prints anything and everything
 * Return: void
 */
void print_all(const char * const format, ...)
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
		while (inner < 4)
		{
			if (arr[inner].x == format[outer])
			{
				printf("%s", comma);
				arr[inner].fun(args_list);
				comma = ", ";
			}
			inner++;
		}
		inner = 0;
		outer++;
	}
	printf("\n");
	va_end(args_list);
}
