#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of the file.
 * @text_content: string to be added to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
