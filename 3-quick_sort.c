#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * partition - partitions the array using the last element as pivot
 * @array: the array to be sorted
 * @low: the starting index of the partition
 * @high: the ending index of the partition
 * @size: the size of the array
 *
 * Return: the index of the pivot element after partitioning
 */
int partition(int *array, int low, int high, size_t size)
{
	/* pivot is the last element of the partition according to the Lomuto partition scheme */
	int pivot, i, j, temp;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{

		if (array[j] < pivot)
		{
		i++;
		/*only swap if i and j are different to avoid unnecessary swaps and prints*/
		if (i != j)
		{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		}

		print_array(array, size);
		}

	}

	if (i + 1 != high)
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_recursive - recursively sorts the partitions of the array
 * @array: the array to be sorted
 * @low: the starting index of the partition
 * @high: the ending index of the partition
 * @size: the size of the array
 */
void quick_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);

		quick_recursive(array, low, pivot_index - 1, size);
		quick_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	return;

	quick_recursive(array, 0, size - 1, size);
}
