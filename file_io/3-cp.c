#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void close_func(int fd);
void handle_error(int code, const char *message, const char *file);

/**
 * close_func - Closes a file descriptor, handling errors
 * @fd: File descriptor
 */
void close_func(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * handle_error - Handles errors and exits with the appropriate code
 * @code: Exit code
 * @message: Error message
 * @file: filename
 */
void handle_error(int code, const char *message, const char *file)
{
	if (file)
		dprintf(STDERR_FILENO, message, file);
	else
		dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		handle_error(97, "Usage: cp file_from file_to\n", NULL);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		handle_error(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close_func(file_from);
		handle_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			close_func(file_from);
			close_func(file_to);
			handle_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (read_bytes == -1)
	{
		close_func(file_from);
		close_func(file_to);
		handle_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	close_func(file_from);
	close_func(file_to);
	return (0);
}
