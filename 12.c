#include<stdio.h>
#include<conio.h>
#include<string.h>
void safecopy(char*dest,size_t size,const char*src)
{
	if(strlen(src)<size)
	{
		strcpy(dest,src);
	}
	else
	{
		printf("potential buffer overflow detected copy not performed \n");
	}
}
int main()
{
	char buffer[10];
	safecopy(buffer,sizeof(buffer),"safe");
	printf("buffer content:%s\n",buffer);
	safecopy(buffer,sizeof(buffer),"unsafe string that is too long");
	printf("buffer content :%s \n",buffer);
	getch();
	return 0;
}
