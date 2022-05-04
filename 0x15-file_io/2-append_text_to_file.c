#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: Null terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int text_length, write_status;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		text_length = 0;
		while (text_content[text_length] != '\0')
		{
			text_length++;
		}

		write_status = write(fd, text_content, text_length);
		if (write_status == -1)
		{
			return (-1);
		}
	}
	return (1);
}
