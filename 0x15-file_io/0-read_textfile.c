#include "main.h"

/**
 * read_textfile - read file
 * @filename: file name
 * @letters: no of letter to read
 * Return: bytes read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t b_read, byt_writen;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	b_read = fread(buffer, 1, letters, file);
	if (b_read < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[b_read + 1] = '\0';

	byt_writen = write(STDOUT_FILENO, buffer, b_read);
	if (byt_writen < 0 || byt_writen != b_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);

	return (b_read);
}

