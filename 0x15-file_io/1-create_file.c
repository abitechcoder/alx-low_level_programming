#include <stdio.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a null terminated string to write to the file
 * Return: 1 0n success and - on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int text_length;
	int text_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	text_length = 0;
	while (text_content[text_length] != '\0')
		text_length++;
	text_write = write(fd, text_content, text_length);

	if (text_write == -1)
		return (-1);
	close(fd);
	return (1);
}
