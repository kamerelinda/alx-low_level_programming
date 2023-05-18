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
	ssize_t wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (rd);
}
