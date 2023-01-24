#include "sort.h"
/**
 * selection_sort - implementation the selection sort algorithm
 * @array: the array to sort
 * @size: size of the aray
 */
void selection_sort(int *array, size_t size)
{
	size_t temp, index;
	size_t j, i;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[temp])
				temp = j;
		}
		if (temp != i)
		{
			index = array[i];
			array[i] = array[temp];
			array[temp] = index;
			print_array(array, size);
		}
	}
}
