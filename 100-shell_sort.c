#include "sort.h"

/**
 *shell_sort - sorts using the Knuth sequence
 *@array: array to sort
 *@size: size
 */
void shell_sort(int *array, size_t size)
{
	int gap = 1, i, j, k, temp, gapc = 0;

	while (gap < (int)size)
	{
		gap = gap * 3 + 1;
	}
	while (gap > 0)
	{
		for (i = 0; i < (int)size; i++)
		{
			j  = i - gap;
			while (j >= 0)
			{
				k = j + gap;
				if (array[j] <= array[k])
					j = -1;
				else
				{
					temp = array[j];
					array[j] = array[k];
					array[k] = temp;
					j -= gap;
				}
			}
		}
		if (gapc != 0)
			print_array(array, size);
		gap /= 3;
		gapc += 1;
	}
}
