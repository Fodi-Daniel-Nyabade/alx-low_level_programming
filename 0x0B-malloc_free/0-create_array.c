#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialises
 * it with a specific char.
 * @size: a parameter passed to the function
 * @c: a parameter passed to the function
 * Return: NULL (if size == 0), pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
