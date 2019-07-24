#include <stdio.h>

/**
 * print_name - print a name
 * @name: name of the person
 * @f: function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
