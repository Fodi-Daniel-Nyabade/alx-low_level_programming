#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - add two numbers
 * @argc: count number of arguments
 * @argv: argument vector
 * Return: 0 (success)
 * **/

int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc < 2)
	{
		printf("%d\n", result);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j])
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		result += atoi(arg);
	}

	printf("%d\n", result);
	return (0);
}
