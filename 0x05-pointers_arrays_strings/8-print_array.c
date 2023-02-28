#include "main.h"
#include <stdio.h>


/**
 * print_array - Prints n elements of an array of integers
 * @a: function parameter to be printed
 * @n: function parameter to be printed
 * Return 0
 */

void print_array(int *a, int n)

{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k != (n - 1))
			printf("%d, ", a[k]);
		else
			printf("%d", a[k]);
	}
	printf("\n");
}
