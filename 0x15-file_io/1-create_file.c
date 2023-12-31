#include <stdio.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 *
 * Return: file descriptor used or -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, byte_write;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	byte_write = write(fd, text_content, length);

	if (fd == -1 || byte_write == -1)
		return (-1);

	close(fd);

	return (1);
}
