#include <stdio.h>
#include "sort.h"

/**
 * main - Entry point to test bubble_sort
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {64, 34, 25, 12, 22, 11, 90};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Original array:\n");
	print_array(array, size);

	printf("\nSorting with bubble_sort:\n");
	bubble_sort(array, size);

	printf("\nSorted array:\n");
	print_array(array, size);

	return 0;
}

