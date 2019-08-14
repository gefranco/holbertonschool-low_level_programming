#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
/**
 * append_text_to_file -function that appends text at the end of a file
 * @filename: archive filename
 * @text_content: string to write to the file
 * Return: Always 0.
 */
int copy_file(const char *src, const char *dest)
{

	int fd;
	int fdd;


	int j = 1024;

	int i;
	char buf[1024];

/*read*/

	 fd = open(src, O_RDONLY);

	 if (fd == -1)
	 {
		 
		 exit(98);
	 }
	
	



	if (dest == NULL)
		return (0);

	fdd = open(dest, O_CREAT | O_WRONLY | O_APPEND, 0600);

	if (fdd == -1)
	{
		return (-1);
	}



	 read(fd, buf, 1024);

	 while(buf[j] != '\0')
	 {

		 /*write(fdd, buf, 1024);*/
		
		 /*dprintf(fptr,"%d.%s\n", i, str);*/  
		 read(fd, buf, 1024);
		
		 i = 0;
		 while(buf[i] != '\0')
		 {
			/*write(fdd, buf, 1);*/
			 dprintf(fdd,"%c",buf[i]);
			i++;
		 }
		 j+=1024;
	 }






	close(fd);	

	close(fdd);

	return (1);

	/*read*/



}
int main(int argc, char *argv[])
{

(void) argc;

copy_file(argv[1],argv[2]);

/*	char buf[1024];
	int fd;


	int i = 1024;

	fd = open("Requiescat", O_RDONLY);

	 if (fd == -1)
	 {
		 
		 return(0);
	 }

	
	read(fd, buf, 1024);	

	 while(buf[i] != '\0')
	 {
		 read(fd, buf, 1024);
	
		 printf("%s", buf);
		 i+=1024;
	 }


*/


	 return (0);
			 
}






