#include "main.h"
/**
 *append_text_to_file - appends text at
 *end of file
 *@filename: name of file
 *@text_content: string to be appended
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;


	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
	{
		return (-1);
	}
	wr = write(op, text_content, len);
	if (wr == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
