#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - char *s
 * @s: string that is being measured
 *
 * description: function that returns lenth of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount])
	{
		charCount++;
	}
	return (charCount);
}
/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 * description: print char
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_string - takes char *str string as argument
 * @str: string to be printed
 * description: writes char *str to stdout
 * Return: 1 on success, -1 on error and errno set appropriately
 */
int print_string(char *str)
{
	return (write(1, str, _strlen(str)));
}

/**
 * char_func - prints char
 * @args_list: argument list
 * Return: void
 */
int char_func(va_list args_list)
{
	return (print_char(va_arg(args_list, int)));
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
