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
	
	if (n < 0)
	{	
		printf("\n");
		return;
	}
	va_start(valist, n);
	for (i = 0; i < n - 1; i++)
	{
		v = va_arg(valist, char *);
		if (!v)
			v = "(nil)";
		if (separator)
			printf("%s%s", v, separator);
		else
			printf("%s", v);
	}
	v = va_arg(valist, char*);
	if (!v)
		v = "(nil)";
	printf("%s\n", v);
	va_end(valist);
}
