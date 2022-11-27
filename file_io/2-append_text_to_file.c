#include "main.h"
/**
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, wr, i = 0;

	if (!filename)
	{
		return (0);
	}
	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo == -1)
	{
		return -1;
	}
	if (text_content == NULL)
	{
		close(fo);
		return (1);
	}
	while (text_content[i])
	{
		i++;
	}
	wr = write(fo, text_content, i);
	if (wr == -1)
	{
		return (-1);
	}
	close(fo);
	return (1);
}
