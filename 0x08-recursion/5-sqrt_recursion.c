#include "holberton.h"
#include <stdio.h>
int _sqrt(int exp, int number);
/**
 * _sqrt_recursion - square root of a number
 * @n : the number
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n));
}
/**
 * _sqrt - recursion
 * @n: the root number
 * @number: the base number
 * Return: yhe root number if have square, - 1 otherwise
 */
int _sqrt(int n, int number)
{
	if (n < 0)
		return (-1);
	else if (n * n == number)
		return (n);
	else
		return (_sqrt(n - 1, number));
}
