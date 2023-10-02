#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argv: array
 * @argc: number
 *
 * Return: Always (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
