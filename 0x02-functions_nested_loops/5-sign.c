#include "main.h"
/**
 * print_sign - prints the magnitude of a number
 * @n: character being passed to the function
 * Return: 1 when greater than zero, 0 when equall to zero and -1 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
