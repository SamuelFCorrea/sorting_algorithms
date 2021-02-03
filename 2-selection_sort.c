#include "sort.h"

/**
 * selection_sort - sort an array with the selection method
 * @array: <-
 * @size: array size
 *
 * Return: none
 */

void selection_sort(int *array, size_t size)
{
	int act;
	size_t i, j, l;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		act = array[i];
		for (j = i; j < size; j++)
		{
			if (act > array[j])
			{
				l = j;
				act = array[j];
			}
		}

		if (act < array[i])
		{
			array[l] = array[i];
			array[i] = act;
		
			print_array(array, size);
		}
	}
}
