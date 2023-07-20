#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int prn;

	for (prn = 0; prn < 10; prn++)
	{
		if (prn != 2 && prn != 4)
		{
			_putchar(prn + '0');
		}
	}
	_putchar('\n');
}
