#include "main.h"

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
	ssize_t lr, lp;

	if (!filename)
		return (0);

	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	lr = read(fd, buf, letters);

	lp = write(STDOUT_FILENO, buf, lr);
	if (lp == -1)
		return (0);

	close(fd);
	free(buf);
	return (lp);
}
