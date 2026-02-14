#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - sorts an array using Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	/**
	 * Variables to iterate through the array
	 * and a temporary variable to swap elements
	 */
	size_t i, j;
	int temp;

	/*Checking for NULL or size less than 2, if true return nothing*/
	if (array == NULL || size < 2)
		return;

	/*In first loop we will itereate throught the array based on the given size*/
	for (i = 0; i < size - 1; i++)
	{

	/**
	* In the second loop we will compare the current element with the next one,
	* if the current element is greater than the next one,
	* we will swap them and print the array
	*/
		for (j = 0; j < size - 1 - i; j++)
		{

			if (array[j] > array[j + 1])
			{
				/**
				 * We save the current element in a temporary variable
				 * then we swap it with the next element and print the array
				 */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}

		}

	}

}
