#include "sort.h"

/**
 * selection_sort - function for sorting algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;

			print_array(array, size);
		}
	}
}
