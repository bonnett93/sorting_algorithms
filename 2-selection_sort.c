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
	int a, pivote;
	size_t i, j, pos;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		pivote = array[i];
		pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (pivote > array[j])
			{
				pivote = array[j];
				pos = j;
			}
		}
		if (pos != i)
		{
			a = array[i];
			array[i] = array[pos];
			array[pos] = a;
			print_array(array, size);
		}
	}
}
