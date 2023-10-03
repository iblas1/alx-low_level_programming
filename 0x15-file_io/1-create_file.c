#include "main.h"

/**
 * create_file - read file
 * @filename: file name
 * @text_content: no of letter to read
 * Return: bytes read.
 */

int create_file(const char *filename, char *text_content)
{
	int f_t_c;

	if (filename == NULL)
	{
		return (-1);
	}

	f_t_c = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f_t_c == -1)
	{
		perror("open");
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(f_t_c, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			perror("write");
			close(f_t_c);
			return (-1);
		}
	}

	close(f_t_c);
	return (1);
}

