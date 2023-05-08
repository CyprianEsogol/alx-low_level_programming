#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of the file created
 * @text_content: string to write to the file
 * Return: 1 success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int z;

	if (filename == NULL)
	{
		return (-1);
	}
	z = 0;
	if (text_content != NULL)
	{
		while (text_content[z])
		{
			z++;
		}
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, z);
	if (x == -1 || y == -1)
	{
		return (-1);
	}
	close(x);
	return (1);
}
