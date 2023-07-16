#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints three separate numbers as output
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				putchar('0' + num3);

				if (num1 != 7 || num2 != 8 || num3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);/* indicates a successful execution */
}
