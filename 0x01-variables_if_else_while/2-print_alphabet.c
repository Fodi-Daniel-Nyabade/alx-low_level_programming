#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabets in lowercase.
 * Return: 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);/* signifies successful execution */
}
