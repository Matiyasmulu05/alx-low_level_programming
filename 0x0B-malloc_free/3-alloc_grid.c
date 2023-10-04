#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int n, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		mee[n] = malloc(sizeof(int) * width);

		if (mee[n] == NULL)
		{
			for (; n >= 0; n--)
				free(mee[n]);

			free(mee);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (y = 0; y < width; y++)
			mee[n][y] = 0;
	}

	return (mee);
}
