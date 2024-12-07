#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *create_buffer(char *file);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)

{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * error_exit - Prints an error message and exits the program
 * @code: exit code
 * @message: error message
 * @arg: filename to be inserted in the error message
 */
void error_exit(int code, const char *message, void *arg)
{
	if (code == 100)
		dprintf(STDERR_FILENO, message, *(int *)arg);
	else
		dprintf(STDERR_FILENO, message, (char *)arg);
	exit(code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char *buffer;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	buffer = create_buffer(argv[2]);

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (rd == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", (void *)&fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", (void *)&fd_to);

	free(buffer);

	return (0);
}
