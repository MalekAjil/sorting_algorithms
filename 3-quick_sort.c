#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	size_t i = 1, j = 0, idx = 0;
	int t, min;

	for (j = 0; j < size; j++)
	{
		min = array[j];
		for (i = j + 1; i < size; i++)
			if (min > array[i])
			{
				idx = i;
				min = array[i];
			}
		if (array[j] > min)
		{
			t = array[j];
			array[j] = array[idx];
			array[idx] = t;
			print_array(array, size);
		}
	}
}
