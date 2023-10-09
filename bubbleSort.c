#include "main.h"

/**
 * bubbleSort - pairs of adjacent elements are compared, and the elements swapped if they are not in order.
 * @arr: array
 * @size: the size of the array
 * Return: void
 */

void bubbleSort(int *arr, int size)
{
	int i, j, temp;

	for (i = 0 ; i < size - 1 ; i++)
	{
		for (j = 0 ; j < size - i - 1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
