#include "sort.h"

/**
 * bubble_sort - Sort an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 * Return: Don´t return
 */

void bubble_sort(int *array, size_t size)
{
	int a, cambio = 1;
	size_t i, pos = size, final_c = 0;

	if (array == NULL)
		return;
	while (cambio == 1)
	{
		cambio = 0;
		for (i = 0; i < pos; i++)
		{
			if (array[i] > array[i + 1])
			{
				a = array[i];
				array[i] = array[i + 1];
				array[i + 1] = a;
				cambio = 1;
				final_c = i + 1;
				print_array(array, size);
			}
			if (i == pos - 2)
			{
				pos = final_c;
				continue;
			}
		}
	}
}
