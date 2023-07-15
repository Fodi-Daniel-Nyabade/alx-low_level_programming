#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all strings from 0 to 9
 * Retur: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);/* shows successful execution */
}
