#include "sort.h"

size_t full_size;
/**
 * quick_sort - quickest way to sort alogrithm
 * @array: array of ints
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	int pivot = (int) size - 1;
	int i = 0, j = 0, temp, check = 0;

	if (!full_size)
	{
		full_size = size;
	}
	while (i < pivot)
	{
		if (array[i] >= array[pivot])
		{
			j = i;
			for (; j < pivot; j++)
			{
				if (array[j] < array[i])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					break;
				}
			}
			temp = array[pivot];
			array[pivot] = array[i];
			array[i] = temp;
			check++;
		}
		i++;
	}
	print_array(array, full_size);
	if (check != 0)
	{
		quick_sort(array, pivot);
	}
}
