#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile- reads text files and post to POSIX standard output
 * Description: reads a given number of letters
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: if NULL return 0
 *         does not write the expected amount of bytes, return 0
 *         if the file can not be opened or read, return 0
 *         returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t bytes_read = read(file_descriptor, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
	{
		return (0);
	}
	if (file_descriptor == -1)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_read);
}
