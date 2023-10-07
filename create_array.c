#include "main.h"

/**
 * create_array - creates array.
 * @size: size of the array.
 * Return: array.
 */

int *create_array(int size)
{
	int *T;
	int i;

	T = malloc(sizeof(int) * size);
	printf("Please Fill the Array : \n");
	for (i = 0 ; i < size ; i++)
	{
		printf("%d : ", i + 1);
		scanf("%d", &T[i]);
	}

	return (T);
}
