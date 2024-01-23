#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 1, j = 0;
	int t;

	if (size < 2)
		return;
	for (j = 0; j < size; j++)
	{
		for (i = 1; i < size; i++)
			if (array[i] < array[i - 1])
			{
				t = array[i];
				array[i] = array[i - 1];
				array[i - 1] = t;
				print_array(array, size);
			}
	}
}
