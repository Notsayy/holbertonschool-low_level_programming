#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * close_func - Closes a file descriptor, handling errors
 * @file: File to close
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
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, readb, writeb;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	readb = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	do {
		if (file_from == -1 || readb == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writeb = write(file_to, buffer, readb);
		if (file_to == -1 || writeb == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		readb = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (readb > 0);
	free(buffer);
	close_func(file_from);
	close_func(file_to);
	return (0);
}
