#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int swap;

		/*One by one move boundary of unsorted subarray*/
	for (i = 0; i < size - 1; i++)
	{
		/*Find the minimum element in unsorted array*/
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			min_index = j;
		}
		if (min_index != i)
		{
			swap = array[i];
			array[i] = array[min_index];
			array[min_index] = swap;
			print_array(array, size);
		}
	}
}
