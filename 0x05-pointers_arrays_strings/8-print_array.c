#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements of array
 * @a: a parameter to the function
 * @n: a parameter to the function
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
