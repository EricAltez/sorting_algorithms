#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * merge - Auxiliar function for
 * Merge sort algorithm
 * @arr: array
 * @low: low index
 * @middle: middle
 * @high: high index
 * @helper: integer
 * Return: void
 */
void merge(int *arr, int *helper, size_t low, size_t middle, size_t high)
{
	size_t i, j, k = 0;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(helper + low, middle  - low);
	printf("[right]: ");
	print_array(helper + middle, high - middle);

	for (i = low, j = middle; i < middle && j < high; k++)
	{
		if (helper[i] < helper[j])
			arr[k] = helper[i++];
		else
			arr[k] = helper[j++];
	}

	while (i < middle)
		arr[k++] = helper[i++];
	while (j < high)
		arr[k++] = helper[j++];

	for (k = low, i = 0; k < high; k++)
		helper[k] = arr[i++];

	printf("[Done]: ");
	print_array(helper + low, high - low);
}

/**
 * merge_split - recursive function that merge sorts an array
 * @arr: copy array
 * @helper: array to merge sort
 * @low: index of the left element
 * @high: index of the right element
 */
void merge_split(int *arr, int *helper, size_t low, size_t high)
{
	size_t middle;

	if (high - low > 1)
	{
		middle = (high - low) / 2 + low;
		merge_split(arr, helper, low, middle);
		merge_split(arr, helper, middle, high);
		merge(arr, helper, low, middle, high);
	}
}

/**
 * merge_sort - sorts an array with the Merge Sort algorithm
 * @array: array of ints to sort
 * @size: size of the array
 */
void merge_sort(int *array, size_t size)
{
	int *arr;

	if (!array || size < 2)
		return;

	arr = malloc(sizeof(int) * size);

	merge_split(arr, array, 0, size);
	free(arr);
}
