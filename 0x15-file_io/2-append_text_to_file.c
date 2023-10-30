#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int _open, _write;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}

	}

	_open = open(filename, O_WRONLY | O_APPEND);
	_write = write(_open, text_content, len);

	if (_open == -1 || _write == -1)
		return (-1);

	close(_open);

	return (1);
}
