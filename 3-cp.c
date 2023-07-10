#include "main.h"

/**
 * main - Program that copies contents of a file to another file.
 *
 * @argc: Number of arguments.
 *
 * @argv: Array of arguments.
 *
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int fd_f, fd_t, read_bytes, write_bytes;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_f = open(argv[1], O_RDONLY);
	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_t == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_bytes = read(fd_f, buf, 1024)) > 0)
	{
		write_bytes = write(fd_t, buf, read_bytes);
		if (write_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_f) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_f), exit(100);

	if (close(fd_t) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t), exit(100);

	return (0);
}
