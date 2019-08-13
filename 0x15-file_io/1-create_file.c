#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
/**
 * create_file - function that reads a text file and prints it.
 * @filename: archive filename
 * @text_content: string to write to the file
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{

	int fd;

	int l;

	int lw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	l = 0;

	if (text_content == NULL)
		text_content = "\0";
	while (text_content[l])
		l++;

	lw = write(fd, text_content, l);

	if (lw == -1)
		return (-1);


	close(fd);

	return (1);

}

