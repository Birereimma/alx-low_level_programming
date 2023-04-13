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
	ssize_t file;
	ssize_t bytes_read;
	ssize_t bytes_write;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	bytes_read = read(file, buffer, letters);
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file);

	return (bytes_write);
}
