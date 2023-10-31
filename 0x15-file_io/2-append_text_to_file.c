#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: null terminated string
 *
 * Return: 1 on success and -1 o failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_write;

	if (filename == NULL)
		{
return (-1);
}

	if (text_content == NULL)
	{
		return (-1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_APPEND, 0664);
		if (fd == -1)
			return (-1);

		byte_write = write(fd, text_content, strlen(text_content));
		if (byte_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return(byte_write);

}
