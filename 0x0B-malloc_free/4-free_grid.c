/*Author is Neway*/
#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimensional
  * @grid: passed parameter of grid
  * @height: passed parameter of height
  *
  * Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}

