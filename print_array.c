#include "main.h"

/**
 * print_array - prints array.
 * @arr: array.
 * @size: size of the array.
 * Return: void.
 */

void print_array(int *arr, int size)
{
	int i;

	for (i = 0 ; i < size ; i++)
		printf("%d\t", arr[i]);
}
