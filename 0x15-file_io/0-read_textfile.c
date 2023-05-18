#include "main.h"

/**
 * read_textfile - reads a text file and prints it to output
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t rd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	if (write(STDOUT_FILENO, buf, rd) != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (rd);
}
