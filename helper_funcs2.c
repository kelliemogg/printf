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
 * inf_func - prints float number
 * @args_list: arg list
 * Return: void
 */

void int_func(va_list args_list)
{
        printf("%i", va_arg(args_list, int));
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
