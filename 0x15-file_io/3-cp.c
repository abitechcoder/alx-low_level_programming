#include <stdio.h>
#include "main.h"

/**
 * print_error - function that prints error
 * @file_from: parameter 1
 * @file_to: parameter 2
 * @argv: arguments away
 */

void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments passed to the program
 * Return: 1 for success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_from, close_to;
	ssize_t read_from, write_to;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_from = open(argv[1], O_RDONLY);
	print_error(file_from, file_to, argv);

	read_from = read(file_from, buf, 1024);
	write_to = write(file_to, buf, read_from);
	print_error(read_from, write_to, argv);

	close_from = close(file_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from);
		exit(100);
	}
	close_to = close(file_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_to);
		exit(100);
	}
	return (1);
}
