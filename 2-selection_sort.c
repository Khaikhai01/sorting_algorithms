#include "sort.h"

/**
 * selection_sort - FUnction for selection sort
 * @array: Array to sort
 * @size: The size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t index = 0;
	int max = 0, temp = 0, diff = 0;
	size_t min_index = 0, j = 0;

	for (index = 0; index < size; index++)
	{
		max = 0;
		min_index = index;
		for (j = index; j < size; j++)
		{
			diff = array[index] - array[j];
			if (diff > max)
			{
				max = diff;
				min_index = j;
			}
		}
		if (max > 0)
		{
			temp = array[min_index];
			array[min_index] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}
