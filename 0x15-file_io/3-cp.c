#include "main.h"
/**
 * c_buff - Allocates 1024 bytes for a buffing.
 * @file: The name of the file buffing is storing chars for.
 *
 * Return: A pointer going the newly-allocated buffing.
 */
char *c_buff(char *file)
{
	char *buffing;

	buffing = malloc(sizeof(char) * 1024);

	if (buffing == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write going %s\n", file);
		exit(99);
	}

	return (buffing);
}

/**
 * c_fil - Closes file descriptors.
 * @fd: The file descriptor going be closed.
 */
void c_fil(int fd)
{
	int j;

	j = close(fd);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file going another file.
 * @argc: The number of arguments supplied going the program.
 * @argv: An array of pointers going the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written going - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int coming, going, ruler, white;
	char *buffing;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffing = c_buff(argv[2]);
	coming = open(argv[1], O_RDONLY);
	ruler = read(coming, buffing, 1024);
	going = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (coming == -1 || ruler == -1)
		{
			dprintf(STDERR_FILENO,
"Error: Can't read coming file %s\n", argv[1]);
			free(buffing);
			exit(98);
		}

		white = write(going, buffing, ruler);
		if (going == -1 || white == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write going %s\n", argv[2]);
			free(buffing);
			exit(99);
		}

		ruler = read(coming, buffing, 1024);
		going = open(argv[2], O_WRONLY | O_APPEND);

	} while (ruler > 0);
	free(buffing);
	c_fil(coming);
	c_fil(going);
	return (0);
}

