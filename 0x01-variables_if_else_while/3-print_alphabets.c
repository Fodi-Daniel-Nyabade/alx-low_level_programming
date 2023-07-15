#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints both alpha and lower cases.
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);/* shows a successful execution */
}
