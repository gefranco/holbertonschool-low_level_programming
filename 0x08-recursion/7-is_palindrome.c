#include "holberton.h"
#include <stdio.h>
int palindrome(char *s, int, int);
int _strlen(char *s);
/**
 * is_palindrome - check if a word is palindrome
 * @s : the word
 * Return: 1 if is palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int final = _strlen(s);

	return (palindrome(s, 0, final - 1));
}
/**
 * palindrome - recursion
 * @s: the word
 * @index: the initial letter
 * @final: the final letter
 * Return: 1 if is palindrome
 */
int palindrome(char *s, int index, int final)
{
	if (index >= final)
		return (1);
	else if (s[index] != s[final])
		return (0);
	else
		return (palindrome(s, ++index, --final));
}
/**
 * _strlen - length of a word
 * @s : the string
 * Return: the length
 */
int _strlen(char *s)
{
	if (*s)
	{
		return (1 + _strlen(++s));
	}
	else
		return (0);
}

