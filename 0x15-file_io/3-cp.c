#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - program that copies the content of a file to another file.
 * @file_from: file_from.
 * @file_to: file_to.
 * @b: arguments.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *b[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", b[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", b[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @a: number of arguments.
 * @b: arguments.
 * Return: Always 0.
 */
int main(int a, char *b[])
{
	int file_from;
	int file_to, c;
	ssize_t d, e;
	char f[1024];

	if (a != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(b[1], O_RDONLY);
	file_to = open(b[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, b);

	d = 1024;
	while (d == 1024)
	{
		d = read(file_from, f, 1024);
		if (d == -1)
			error_file(-1, 0, b);
		e = write(file_to, f, d);
		if (e == -1)
			error_file(0, -1, b);
	}

	c = close(file_from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	c = close(file_to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
