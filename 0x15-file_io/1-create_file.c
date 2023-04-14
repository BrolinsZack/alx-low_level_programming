#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function tht creates a file.
 * @filename: the name of file
 * @text_content: the textual writings
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	int len = 0;
	ssize_t bytes_written = write(fd, text_content, len);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
