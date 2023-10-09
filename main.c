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

	printf("Please Make a Choice \n");
	printf("    1_Selection Sort    \n");
	printf("    2_Insertion Sort    \n");
	printf("    3_Bubble Sort    \n");
	printf("Your Choice : ");
	scanf("%d", &choice);

	if (choice == 1)
		selectionSort(arr, size);
	else if (choice == 2)
		insertionSort(arr, size);
	else if (choice == 3)
		bubbleSort(arr, size);

	print_array(arr, size);

	return (0);
}
