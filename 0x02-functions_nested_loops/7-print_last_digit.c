#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @c: parameter of the function
 * Return: the last digit (successful)
 */
int print_last_digit(int c)
{
	int ld = c % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');

	return (0);
}
