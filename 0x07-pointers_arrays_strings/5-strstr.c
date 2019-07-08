#include "holberton.h"
#include <stdio.h>
int fwrd(char *haystack, char *needle);
/**
 * _strstr - locates a substring
 * @haystack :the array in where looking
 * @needle: the array to find
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	int j;
	int indexWord;

	i = 0;
	j = 0;
	while (needle[i])
	{
		while (haystack[j])
		{
			indexWord = j;
			if (needle[i] == haystack[j])
			{
				if (fwrd(needle, &haystack[j]) == 1)
				{
					return (haystack + indexWord);
				}
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/**
 * fwrd - search a substring in the string
 * @needle: the substring to search
 * @haystack: the string in where to search
 * Return: 1 if found 0 otherwise
 */
int fwrd(char *needle, char *haystack)
{
	int i = 0;
	int found = 1;

	while (needle[i])
	{
		if (needle[i] != haystack[i])
			found = 0;
		i++;
	}
	return (found);
}
