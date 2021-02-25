#include "slide_line.h"

/**
 * slide_line - reproduce the 2048 game mechanics on a single horizontal line.
 * @line: array of integers
 * @size: size of line array
 * @direction: 1 for left, 2 for right
 * Return: 1 success
 */
int slide_line(int *line, size_t size, int direction)
{
	size_t i, j = 0;

	if (direction == 1)
	{
		right_side(line, size);
	}
	else if (direction == 2)
	{
		for (i = 1; i < size; i++)
		{
			if (line[size - 1 - i] != 0)
			{
				if (line[size - 1 - i] == line[size - 1 - j] && j != i)
				{
					line[size - 1 - j] *= 2;
					j++;
					line[size - 1 - i] = 0;
				}
				else if (line[size - 1 - j] == 0)
				{
					line[size - 1 - j] = line[size - 1 - i];
					line[size - 1 - i] = 0;
				}
				else if (line[size - 1 - j - 1] == 0)
				{
					line[size - 1 - j - 1] = line[size - 1 - i];
					j++;
					line[size - 1 - i] = 0;
				}
				else
				{
					j++;
				}
			}
		}
	}
	else
		return (0);

	return (1);
}

/**
 * right_side - helper function
 * @line: array of integers
 * @size: size of line array
 */
void right_side(int *line, size_t size)
{
	size_t i, j = 0;

	for (i = 1; i < size; i++)
	{
		if (line[i] != 0)
		{
			if (line[i] == line[j] && j != i)
			{
				line[j] *= 2;
				j++;
				line[i] = 0;
			}
			else if (line[j] == 0)
			{
				line[j] = line[i];
				line[i] = 0;
			}
			else if (line[j + 1] == 0)
			{
				line[j + 1] = line[i];
				j++;
				line[i] = 0;
			}
			else
			{
				j++;
			}
		}
	}
}
