#include "sort.h"

/**
 * selection_sort - Sort a doubly linked list of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 * Return: Don´t return
 */

void selection_sort(int *array, size_t size)
{
	int a, change;
	size_t i, j;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		change = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				a = array[i];
				array[i] = array[j];
				array[j] = a;
				change = 1;
			}
		}
		if (change == 1)
			print_array(array, size);
	}
}
