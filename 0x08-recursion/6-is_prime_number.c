#include "holberton.h"
#include <stdio.h>
int is_prime(int n, int number);
/**
 * is_prime_number - check if is prime number
 * @n : the number
 * Return: 1 if is prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n - 1, n));
}
/**
 * is_prime - recursion
 * @n: the number
 * @number: the base number
 * Return: the number -1
 */
int is_prime(int n, int number)
{
	if (n <= 1)
		return (1);
	else if (number % n > 0)
		return (is_prime(n - 1, number));
	else
		return (0);
}
