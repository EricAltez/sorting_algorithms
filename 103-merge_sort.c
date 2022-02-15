#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * void merge - function...
 * @arr: int
 * @l: int
 * @m: int
 * @r: int
 *
 * Merges two subarrays of arr[].
 * First subarray is arr[l..m]
 * Second subarray is arr[m+1..r]
 */
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int izq = int izq[n1];
	int der = int der[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		izq[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		der[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; /* Initial index of first subarray*/
	j = 0; /* Initial index of second subarray*/
	k = l; /* Initial index of merged subarray*/
	while (i < n1 && j < n2) {
		if (izq[i] <= der[j]) {
			arr[k] = izq[i];
			i++;
		}
		else {
			arr[k] = der[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr [k] = izq[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = der[j];
		j++;
		k++;
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

	merge(arr, int *, 0, size);
	free(arr);
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
/*
 * printArray - it prints an array
 *@a: int
 *@size: int
 */
void printArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}
