#include <stdio.h>
#include "main.h"
/**
 */
int create_file(const char *filename, char *text_content)
{
	int fd, byte_write;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];) 
			length++;
	}
	fd = open(filename, O_CREAT | O_RWWR | O_TRUNC);
	byte_write = write(fd, text_content, length);
	if (fd == -1 || byte_write == -1)
		return (-1);

	close(fd);

	return (1);
}
