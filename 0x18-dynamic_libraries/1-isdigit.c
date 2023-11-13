#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: arguement passed to the function
 * Return: 1 (success) and 0 (failure)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
