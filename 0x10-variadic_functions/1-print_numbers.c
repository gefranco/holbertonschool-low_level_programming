#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: char to separate the numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
			printf("%d%s", va_arg(valist, int), separator);
		else
			printf("%d", va_arg(valist, int));
	}
	printf("%d", va_arg(valist, int));
	printf("\n");
	va_end(valist);
}
