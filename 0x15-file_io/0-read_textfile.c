#include "main.h"

/* By Abdelghni Hamanar */
/**
 * read_textfile - Entry point
 * @filename: pointer to the file name
 * @letters: size
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r, w, o;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
