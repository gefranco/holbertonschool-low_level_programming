#include "sort.h"

/**
 * selection_sort - sorts an array using the Selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{

	size_t i, j;
	int tmp;
	size_t number;
	/*int change;*/
	if (!array || size < 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		number = i;
		for (j = i + 1 ; j < size; j++)
		{
			if (array[j] < array[number])
			{
			/*	tmp = number;*/
				/*number = array[j];*/
				number = j;
				/*change = j;*/
				/*array[j] = tmp;*/

			}

		}
		if (number != i)
		{
			tmp = array[i];
			array[i] = array[number];
			array[number] = tmp;
			print_array(array, size);
		}
	}

}
