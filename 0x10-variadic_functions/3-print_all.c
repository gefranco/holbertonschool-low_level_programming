#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - check the code for Holberton School students.
 * @format: a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	prt_o print_o[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list valist;
	int i = 0;
	int j = 0;

	if (!format)
		return;

	va_start(valist, format);
	while (format[i])
	{
		j = 0;
		while (print_o[j].t)
		{
			if (print_o[j].t[0] == format[i])
			{
				print_o[j].f(valist);
				if (format[i + 1])
					printf(", ");
				j++;
				continue;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
/**
 * print_char - print a char
 * @valist: valist
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * print_int - print an integer
 * @valist: valist
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * print_float - print float
 * @valist: va_list
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * print_str - print a string
 * @valist: va_list
 */
void print_str(va_list valist)
{
	printf("%s", va_arg(valist, char*));
}
