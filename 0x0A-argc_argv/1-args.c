#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguements passed to it
 * @argc: counts the number of arguements
 * @argv: array of arguments
 * Return: 0 (success)
 **/
int main(int argc, char *argv[] __attribute__((unused)))
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
