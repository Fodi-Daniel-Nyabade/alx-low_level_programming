#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: a parameter to the function
 * Return: the length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
