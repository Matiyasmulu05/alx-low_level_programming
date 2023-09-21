#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int e;
	int m;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (e = 0; s[e] != '\0'; e++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[e] == data1[m])
			{
				s[e] = datarot[m];
				break;
			}
		}
	}
	return (s);
}

