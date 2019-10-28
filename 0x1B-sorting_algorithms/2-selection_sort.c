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
	int number;

	if (!array || size < 1)
		return;

	for (i = 0; i < size; i++)
	{
		number = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < number)
			{
				tmp = number;
				number = array[j];
				array[j] = tmp;

			}

		}
		array[i] = number;
		print_array(array, size);

	}

}
