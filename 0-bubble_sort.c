#include "sort.h"

/**
 *bubble_sort - sort using bobble method
 *@array: array to be sorted
 *@size: size
 */
void bubble_sort(int *array, size_t size)
{
unsigned int i, j;
int swap;

for (i = 0; i < size; i++)
{
	for (j = 0; j < size - i - 1; j++)
	{
		/*
		 * If the current element is greater than
		 * the next element of the array, swap them
		 */

		if (array[j] > array[j + 1])
		{
			/*Swapping the elements*/
			swap = array[j];
			array[j] = array[j + 1];
			array[j + 1] = swap;
			print_array(array, size);
		}
	}
}
}
