#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * merge - merge left side with right side
 * @array: unsorted array of integer and result
 * @helper: copy of the part we want to sort of array
 * @low: low limit of the unsorted block of array
 * @middle: separation between 2 block, it is in left side
 * @high: high limit of the unsorted block of array
 *
 * Return: void
 */
void merge(int *array, int *helper, int low, int middle, int high)
{
	int helperLeft = low, helperRight = middle + 1, current = low;
	int i, current_print;

	/* create a strdup of the array in helper */
	for (i = low; i <= high; i++)
		helper[i] = array[i];

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + helperLeft, helperRight - helperLeft);
	printf("[right]: ");
	print_array(array + helperRight, high + 1 - helperRight);
	/* Iterate through helper array */
	/* compare between left part and right part */
	/* copy the sorted order in the array */
	current_print = current;
	while (helperLeft <= middle || helperRight <= high)
	{
		if (helperLeft <= middle && helperRight <= high)
		{
			if (helper[helperLeft] <= helper[helperRight])
				array[current] = helper[helperLeft], current++, helperLeft++;
			else
				array[current] = helper[helperRight], current++, helperRight++;
		}
		else if (helperLeft >= middle && helperRight <= high)
			array[current] = helper[helperRight], current++, helperRight++;
		else
			array[current] = helper[helperLeft], current++, helperLeft++;
	}
	printf("[Done]: ");
	print_array(array + current_print, high + 1 - low);
}

/**
 * merge_recursion - recursive function that merge sorts an array
 * @arr: copy array
 * @array: array to merge sort
 * @left: index of the left element
 * @right: index of the right element
 */
void merge_recursion(int *arr, int *array, size_t left, size_t right)
{
	size_t middle;

	if (right - left > 1)
	{
		middle = (right - left) / 2 + left;
		merge_recursion(arr, array, left, middle);
		merge_recursion(arr, array, middle, right);
		merge(arr, array, left, middle, right);
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

	merge_recursion(arr, array, 0, size);
	free(arr);
}
