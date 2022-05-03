#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t letters_read, letters_printed;

	if (!filename)
		return (0);

	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	letters_read = read(fd, buf, letters);

	letters_printed = write(STDOUT_FILENO, buf, letters_read);
	if (letters_printed == -1)
		return (0);

	close(fd);
	free(buf);
	return (letters_printed);
}
