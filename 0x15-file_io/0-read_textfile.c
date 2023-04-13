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
	char *buffer;
	FILE *file;
	size_t bytes_read;

	file = fopen(filename, O_RDONLY);
	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	if (fwrite(buffer, sizeof(char), bytes_read, stdout) != bytes_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	free(buffer);
	fclose(file);

	return (bytes_read);
}
