#include <stdio.h>
#include "main.h"
/**
 * read_textfile - reads a textfile and print to the standard output
 * @filename: a pointer to a string that represents the name of the text
 * @letters: the number of letters it should read and print
 *
 * Return: the number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, byte_read, byte_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	byte_read = read(fd, buffer, letters);
	if (byte_read == -1)
	{
		free(buffer);
		return (0);
	}

	byte_write = write(STDOUT_FILENO, buffer, byte_read);
	if (byte_write == -1 || byte_write != byte_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (byte_write);

}
