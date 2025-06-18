#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int my_fork()
{
	printf("simulating fork() system call_creating a new process\n");
	return 1;
}
int my_exit(int status)
{
	printf("simulating exit() system call_process exiting with status %d\n",status);
	return 0;
}
int my_open(char*filename)
{
	printf("simulating open() system call_opening file:%s\n",filename);
	return 1;
}
int my_read(int fd,char*buffer,int bytes)
{
	printf("simulating read() system call_reading %d bytes from file descriptor %d\n",bytes,fd);
	return bytes;
}
int my_write(int fd,char*buffer,int bytes)
{
	printf("simulating write() system call_writting %d bytes to files descriptor %d\n",bytes,fd);
	return bytes;
}
int my_getpid()
{
	printf("simulating getpid() system call_getting current process id\n");
	return 1234;
}
int main()
{
	int child_pid,fd;
	char data[]="hello world!";
	child_pid=my_fork();
	if(child_pid==0)
	{
		printf("child process created with PID:%d\n",my_getpid());
		my_exit(0);
	}
	fd=my_open("my_file,txt");
	my_write (fd,data,strlen(data));
	printf("current process ID:%d\n",my_getpid());
	getch();
	return 0;
}
