#include "main.h"
/**
 * _isalpha - checks whether a character is alphabetic
 * @c: character passed through the function
 * Return: 1 (success) and 0 (unsuccessful)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		return (1); /* succesful */
	else
		return (0); /*unsuccesful*/
}
