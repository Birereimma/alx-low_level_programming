#include "main.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

/**
 * create_file - creates  file
 * @filename: name of the file to be created
 * @text_content: content of the file
 * Return: SUccess
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written, text_len;
	mode_t file_perms = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, file_perms);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		text_len = strlen(text_content);
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
