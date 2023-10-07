#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_noncat - concatenates string
 * @s1: string 1 m
 * @s2: string 2 m
 * @m: no of bytes to concatenates from s2
 * Return: concatenated string
 */

char *string_noncat(char *s1, char *s2, unsigned int m)
{
	unsigned int k;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0; s1[k] != '\0'; k++)
		s1len++;
	for (k = 0; s2[k] != '\0'; k++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + m) + 1);
	if (output == NULL)
		return (NULL);
	if (m >= s2len)
	{
		for (k = 0; s1[k] != '\0'; k++)
			output[k] = s1[k];
		for (k = 0; s2[k] != '\0'; k++)
			output[s1len + k] = s2[k];
		output[s1len + k] = '\0';
	}
	else
	{
		for (k = 0; s1[k] != '\0'; k++)
			output[k] = s1[k];
		for (k = 0; k < m; k++)
			output[s1len + k] = s2[k];
		output[s1len + k] = '\0';
	}
	return (output);
}
