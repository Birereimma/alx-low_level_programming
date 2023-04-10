#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdint.h>

/**
 * create_file - a function that creates a file
 * @filename: name to thee file
 * @text_content: content of the file
 * Return: sucess
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written;
	mode_t file_perms = S_IRUSR | S_IWUSR;
	size_t text_len = (text_content != NULL) ? strlen(text_content) : 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, file_perms);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_len > 0)
	{
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == SIZE_MAX)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

