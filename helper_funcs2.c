#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * int_func - prints float number
 * @args_list: arg list
 * Return: void
 */
int int_func(va_list args_list)
{
	int num = va_arg(args_list, int);
	char swap;
	int buff;
	char c_hold;
	int count = 0;

	if (num < 0)
	{
		count += _putchar ('-');
		swap = ('0' - (num % 10));
		num /= -10;
	}
	else
	{
		swap = ((num % 10) + '0');
		num /= 10;
	}
	buff = 0;
	while (num > 0)
	{
		buff = buff * 10 + (num % 10);
		num /= 10;
	}
	while (buff > 0)
	{
		c_hold = ((buff % 10) + '0');
		count += _putchar(c_hold);
		buff /= 10;
	}
	return (count += print_char(swap));
}
/**
 * string_func - string
 * @args_list: args list
 * Return: num of bytes
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
