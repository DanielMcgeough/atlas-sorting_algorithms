#include "sort.h"

/**
 * bubble sort - compares two ints and sorts them.
 * @array: array of ints
 * @size: number of elements.
 * Return: returns a void.
 */
void bubble_sort(int *array, size_t size)
{
	int temp, sorted = 0;
	size_t i;

	while (!sorted)
	{
		sorted = 1;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				sorted = 0;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}