#include "holberton.h"
/**
* _abs - computes the absolute value of an integer.
* @c: the number to compute the absolute value
* Return: absolute number
*/
int _abs(int number)
{
	if(number < 0)
	{
		return number * (-1);
	}
	else
	{
		return number;
	}
}
