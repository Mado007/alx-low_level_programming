#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - Creates a file.
 * st output.
 * @filename: filename.
 * @text_content: terminated string to write in file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fild, nem;
ssize_t resW;

if (filename == NULL)
return (-1);
fild = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fild == -1)
return (-1);
if (text_content != NULL)
{
nem = 0;
while (*(text_content + nem) != '\0')
nem++;
resW = write(fild, text_content, nem);
if (resW == -1)
{
write(1, "fails", 6);
return (-1);
}
}
close(fild);
return (1);
}
