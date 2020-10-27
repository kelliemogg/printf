#include "holberton.h"
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
