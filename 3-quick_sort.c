#include "sort.h"

/**
 * swap - function to swap elements
 * @a: element to swap
 * @b: element to swap
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* function to find the partition position */
/**
 *partition - partition to sort
 *@array: array to be sorted
 *@low: lower value
 *@high: high value
 *@size: size
 *Return: int
 */
int partition(int *array, int low, int high, size_t size)
{
	/* select the rightmost element as pivot */
	/* pointer for greater element */

	int i, pivot = array[high], j;

	/* traverse each element of the array */
	/* compare them with the pivot */

	for (j = low, i = low - 1 ; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			/* if element smaller than pivot is found */
			/* swap it with the greater element pointed by i */
			i++;

			/* swap element at i with element at j */
			swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, size);
		}

	}

	/* swap the pivot element with the greater element at i */
	swap(&array[i + 1], &array[high]);
	if (array[high] != array[i + 1])
		print_array(array, size);
	/* return the partition point */
	return (i + 1);
}
/**
 *sortquick - recursive sorting function
 *@array: array to be sorted
 *@low: low value
 *@high: high value
 *@size: size
 */
void sortquick(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{

		/* find the pivot element such that */
		/* elements smaller than pivot are on left of pivot */
		/* elements greater than pivot are on right of pivot */

		pivot = partition(array, low, high, size);

		/* recursive call on the left of pivot */

		sortquick(array, low, pivot - 1, size);

		/* recursive call on the right of pivot */

		sortquick(array, pivot + 1, high, size);
	}
}
/**
 *quick_sort - entry point
 *@array: array to be sorted
 *@size: size
 */
void quick_sort(int *array, size_t size)
{
	/* perform quicksort on data */
	sortquick(array, 0, size - 1, size);
}
