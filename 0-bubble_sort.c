#include "sort.h"

/**
 * bubble_sort - sort an array with the bubble method
 * @array: <-
 * @size: array size
 *
 * Return: none
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int aux, tmp;

	if (!array)
		return;
	else if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		aux = array[0];
		for (j = 0; j < size; j++)
		{
			if (aux > array[j])
			{
				tmp = array[j];
				array[j] = aux;
				array[j - 1] = tmp;
				print_array(array, size);
			}
			else if (aux < array[j])
				aux = array[j];
		}
	}
}
