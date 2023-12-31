#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @g: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*g)(char *))
{
	if (name == NULL || g == NULL)
		return;

	g(name);
}
