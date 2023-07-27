#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings together
 * @dest: parameter to the function
 * @src: parameter to the function
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1++] = dest[len2];
	}
	return (dest);
}
