#include "main.h"
/**
 * append_text_to_file - appendfile
 * @filename: filename
 * @text_content: text
 * Return: int 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	int len = 0;
	long int result;

	if (filename == NULL)
		return (-1);
	fn = open(filename, O_RDWR | O_APPEND);
	if (fn == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		result = write(fn, text_content, len);
		if (result == -1)
			return (-1);
	}
	if (close(fn) == -1)
		return (-1);
	return (1);
}
