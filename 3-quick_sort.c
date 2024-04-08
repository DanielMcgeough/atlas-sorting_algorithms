#include "sort.h"

/**
 * quick_sort_recursive - Perform the recursive steps of Quick Sort
 * @array: Array to be sorted
 * @low: Starting index of the subarray
 * @high: Ending index of the subarray
 * @size: Size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pivot = array[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++)
        {
            if (array[j] < pivot)
            {
                i++;
                if (i != j)
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                    print_array(array, size);
                }
            }
        }
        if ((i + 1) != high)
        {
            int temp = array[i + 1];
            array[i + 1] = array[high];
            array[high] = temp;
            print_array(array, size);
        }

        int partition_index = i + 1;

        quick_sort_recursive(array, low, partition_index - 1, size);
        quick_sort_recursive(array, partition_index + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using
 * the Quick sort algorithm with Lomuto partition scheme
 * @array: Array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quick_sort_recursive(array, 0, size - 1, size);
}
