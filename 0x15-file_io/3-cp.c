#include "main.h"

char *create_buffer(char *f);
void close_file(int f);

/* By Abdelghni Hamanar */
/**
 * main - Entry point
 * @argc: len of argv
 * @argv: pointer to arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *buffer;
	int r, w, to, fr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	r = read(fr, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0604);

	do {
		if (fr == -1 || r  == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);

		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(fr, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(fr);
	close_file(to);


	return (0);
}

/**
 * close_file - close file
 * @f: file to close
 * Return: void
*/

void close_file(int f)
{
	int c;

	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
}

/**
 * create_buffer - close file
 * @f: file to create
 * Return: buffer
*/

char *create_buffer(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buffer);
}
