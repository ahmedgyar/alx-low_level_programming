#include "main.h"

/**
 * main - check the code
 * read_textfile - a function that reads a text file and prints it
 *			to POSIX standard output.
 *
 * Return: Always 0.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
