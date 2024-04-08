#include "sort.h"

/**
 * selection_sort- sorts an array of ints into order
 * prints the array after each swap
 * @array: the array of ints to be sorted
 * @size: the size of the array
 *
 * Return: returns a void
 */

void selection_sort(int *array, size_t size)
{
	int s;
	size_t a = 0, k = 1, min;

	while (a < (size -1))
	{
		min = a;
		while (k < size)
		{
			if (array[min] > array[k])
				min = k;
			k++;
		}
		if (array[min] < array[a])
		{
			s = array[min];
			array[min] = array[a];
			array[a] = s;
			print_array(array, size);
		}
		k = (a + 2);
		a++;
	}
}