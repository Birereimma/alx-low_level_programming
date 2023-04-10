#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints
 * to SDIOT
 * @filename: file name to be read
 * @letters: numbers of letters to be read
 * Return: SUccess
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytes_read;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL:wq
			)
	{
		return (0);
	}
	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	if (fwrite(buffer, sizeof(char), bytes_read, stdout) != bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);

	return (bytes_read);
}
