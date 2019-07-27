#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings
 * @separator: the string to separate the numbers
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *v;

	va_start(valist, n);
	for (i = 0; i < n ; i++)
	{
		v = va_arg(valist, char *);
		if (!v)
			v = "(nil)";
		if (separator && i < n - 1)
			printf("%s%s", v, separator);
		else
			printf("%s", v);
	}
	printf("\n");
	va_end(valist);
}
