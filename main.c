#include "main.h"
#include <stdio.h>

/**
 * main - main function.
 * Return: always 0.
 */

int main(void)
{
	int size, *arr, choice;

	printf("Please enter the size of te Array : ");
	scanf("%d", &size);

	arr = create_array(size);

	printf("if u want to use selection sort press 1 : ");
	scanf("%d", &choice);

	if (choice == 1)
	{
		selectionSort(arr, size);
	}
	print_array(arr, size);

	return (0);
}
