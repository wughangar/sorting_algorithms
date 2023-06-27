#include "sort.h"

/**
 * quicksort - function that sorts an array
 * @array: array to be sorted
 * @low: lower value
 * @high: higher value
 * @size: size of the array
 *
 * Return: void
 */

void quicksort(int *array, int low, int high, size_t size)
{
	int i, j, tmp;
	int pivot;
	int pi;

	if (low < high)
	{
		pivot = array[high];
		i = (low - 1);

		for (j = low; j <= high - 1; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				if (i != j)
				{
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
					print_array(array, size);
				}
			}
		}
		if (array[i + 1] > array[high])
		{
			tmp = array[i + 1];
			array[i + 1] = array[high];
			array[high] = tmp;
			print_array(array, size);
		}

		pi = (i + 1);

		quicksort(array, low, pi - 1, size);
		quicksort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - function for quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */


void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}

