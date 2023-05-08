#include "main.h"

/**
 * append_text_to_file - Appends text in the end of file
 * @filename: Name of the file to be appended
 * @text_content: terminated string to write in file
 *
 * Return: 1 on success file exist, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int kf;
int nletters;
int wwd;

if (!filename)
return (-1);

kf = open(filename, O_WRONLY | O_APPEND);

if (kf == -1)
return (-1);

if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
;

wwd = write(kf, text_content, nletters);

if (wwd == -1)
return (-1);
}

close(kf);

return (1);
}
