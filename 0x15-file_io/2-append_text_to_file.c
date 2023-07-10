#include "main.h"

/**
 * append_text_to_file - appends text to already existing file
 * @filename: character string containing file's name
 * @text_content: content to write into file
 * Return: 1 on sucess, -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wwords, i;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;

	wwords = write(file, text_content, i);
	if (wwords == -1)
		return (-1);

	close(file);
	return (1);
}
