#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 * Return: 1 
 **/
int create_file(const char *filename, char *text_content)
{
	int op, i = 0;

	if (!filename)
	{
		return (-1);
	}
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(op);
		return (-1);
	}
	while (text_content[i])
	{
		i++;
	}
	write(op, text_content, i);
	close(op);
	return (1);
}
