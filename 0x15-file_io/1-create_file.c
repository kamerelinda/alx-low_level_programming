#include "main.h"
#include <string.h>
/**
 *create_file - creates a file
 *@filename: name of the file to be created
 *@text_content: string to write to file
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;


	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (op);
	}
	wr = write(op, text_content, strlen(text_content));
	if (wr == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
