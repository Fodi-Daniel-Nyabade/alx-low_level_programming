#include "main.h"
/**
 * rev_string - reverse a string
 * @s: a parameter to the function
 */

void rev_string(char *s)
{
	int length = 0, index = 0;
	char temp;

	while (s[index++])
	{
		length++;
	}
	for (index = length - 1; index >= length / 2; index--)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
