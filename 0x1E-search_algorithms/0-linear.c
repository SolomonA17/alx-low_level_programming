#include "search_algos.h"

/**
  * linear_search - Performs a search for a specified value within an array
  *                 of integers using the linear search technique.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not found or the array is NULL, returns -1.
  *         Otherwise, returns the index of the first occurrence of the value.
  *
  * Description: Prints each value in the array as it is compared during the search.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

