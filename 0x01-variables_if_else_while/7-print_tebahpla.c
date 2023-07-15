#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 * Return: 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');
	return (0);/* shows completness */
}
