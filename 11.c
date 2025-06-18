#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX_SUBJECT 3
#define MAX_OBJECT 3
enum accessright{NO_ACCESS,READ,WRITE,EXECUTE};
const char*accessright[]={"NO_ACCESS","READ","WRITE","EXECUTE"};
int accessmatrix[MAX_SUBJECT][MAX_OBJECT]={
	{READ,NO_ACCESS,EXECUTE},
	{WRITE,READ,NO_ACCESS},
	{EXECUTE,WRITE,READ}
	};
int main()
{
	int subject=1;
	int object=2;
	printf("subject %d has %s access to object %d\n",
	subject,accessright[accessmatrix[subject][object]],object);
	getch();
	return 0;
}
	

