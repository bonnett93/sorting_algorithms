#include "sort.h"

/**
 * quick_sort - Sort a doubly linked list of integers
 * in ascending order using the Quick sort algorithm
 *
 * @array: The arrayay to sort
 * @size: The size of the arrayay
 * Return: Don´t return
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	my_quick(array, 0, size - 1, size);
}

/**
 * my_quick - Sort a doubly linked list of integers
 * in ascending order using the Quick sort algorithm
 *
 * @array: The arrayay to sort
 * @low: The minimun index to realice the sort
 * @high: The maximun index to realice the sort
 * @size: The size of the arrayay
 * Return: Don´t return
 */
void my_quick(int *array, int low, int high, size_t size)
{
	int half_id;

	if (low < high - 1)
	{
		half_id = partition(array, low, high, size);
		my_quick(array, low, half_id - 1, size);
		my_quick(array, half_id + 1, high, size);
	}
}

/**
 * partition - Choose a pivot, and order the array, left the numbers minor
 * the pivot, to rigth the greater.
 * @array: The array to sort
 * @low: The minimun index to realice the sort
 * @high: The maximun index to realice the sort
 * @size: The size of the arrayay
 * Return: Return the final position of pivot.
 */
int partition(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int idx = low, i = low;

	for (; i < high; i++)
	{
		if (array[i] < pivot)
		{
			swap(array, idx, i, size);
			idx++;
		}
	}
	swap(array, idx, high, size);
	return (idx);
}

/**
 * swap - Swap to array positions if values are diferent and print the array.
 * @array: The array to sort
 * @i: Position of one of the elements.
 * @j: Position of other of the elements.
 * @size: The size of the arrayay
 * Return: Don´t return
 */
void swap(int *array, int i, int j, size_t size)
{
	int a;

	if (array[i] != array[j])
	{
		a = array[i];
		array[i] = array[j];
		array[j] = a;
		print_array(array, size);
	}
}
