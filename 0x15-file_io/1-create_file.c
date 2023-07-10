#include "main.h"

/**
 * create_file - creates file for user
 * @filename: character string containing filename
 * @text_content: content to print in file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, wwords, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		wwords = write(file, text_content, i);
		if (wwords == -1)
			return (-1);
	}

	close(file);
	return (1);
}
