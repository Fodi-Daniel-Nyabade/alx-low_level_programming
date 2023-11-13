#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: arguements being passed to the function
 * Return: 1 (success) and 0 (unsuccessful)
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1); /* successful */
	}
	else
	{
		return (0); /* unsuccessful */
	}
}
