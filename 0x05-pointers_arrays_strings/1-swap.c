#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter to the function
 * @b: parameter to the function
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
