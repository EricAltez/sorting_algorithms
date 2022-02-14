#include "sort.h"

/**
 *counting_sort - counting sort on array
 *@array: array to be sorted
 *@size: size
 */
void counting_sort(int *array, size_t size)
{
	int *aux = NULL, i, max = 0, *count;
	size_t tmp, res = 0;

	if (array == NULL || size < 2)
		return;

	aux = malloc(sizeof(int) * size);
	if (!aux)
		return;

	for (i = 0; i < (int)size; i++)
	{
		aux[i] = array[i];
		if (array[i] > max)
			max = array[i];
	}
	count = malloc(sizeof(int) * (max + 1));
	if (!count)
	{
		free(aux);
		return;
	}
	for (i = 0; i <= max; i++)
		count[i] = 0;
	for (i = 0; i < (int)size; i++)
		count[array[i]] += 1;
	for (i = 0; i <= max; i++)
	{
		tmp = count[i];
		count[i] = res;
		res += tmp;
	}
	for (i = 0; i < (int)size; i++)
	{
		array[count[aux[i]]] = aux[i];
		count[aux[i]] += 1;
	}
	print_array(count, max + 1);
	free(count);
	free(aux);
}
