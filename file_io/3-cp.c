#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits the program
 * @code: exit code
 * @message: error message
 * @arg: filename to be inserted in the error message
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 */
char *create_buffer(const char *filename)
{
	char *buffer = malloc(BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory for %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_func - Closes a file descriptor and handles errors.
 * @file: File descriptor to close.
 */
void close_func(int file)
{
	int c = close(file);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
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

	buffer = create_buffer(argv[2]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_func(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
		{
			free(buffer);
			close_func(fd_from);
			close_func(fd_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (rd == -1)
	{
		free(buffer);
		close_func(fd_from);
		close_func(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	free(buffer);
	close_func(fd_from);
	close_func(fd_to);

	return (0);
}
