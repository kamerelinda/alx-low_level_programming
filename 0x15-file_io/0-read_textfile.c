#include "main.h"

/**
 * read_textfile - reads a text file and prints it to output
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd;
	ssize_t wr;
	char *buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	rd = read(fd, buf, letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	if (wr != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	return (wr);
	free(buf);
	close(fd);
}
