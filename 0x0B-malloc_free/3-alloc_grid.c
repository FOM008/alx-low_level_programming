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
	int **mtr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mtr = malloc(sizeof(int *) * height);

	if (mtr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		mtr[x] = malloc(sizeof(int) * width);

		if (mtr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mtr[x]);
			free(mtr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mtr[x][y] = 0;
	}
	return (mtr);
}
