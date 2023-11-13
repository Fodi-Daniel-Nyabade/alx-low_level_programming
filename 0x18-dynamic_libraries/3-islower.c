#include "main.h"
/**
 * _islower - checks for lowercase letter
 * @c: are characters passed through the function
 * Return: 1 (success) and  0 (not successful)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1); /* successful */
	else
		return (0); /* unsuccessful */
}
