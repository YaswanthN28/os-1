#include<stdio.h>
#include<conio.h>
#include<pthread.h>
int i;
void*task1(void*arg)
{
	for(i=0;i<5;i++)
	{
		printf("task 1 running...\n");
	}
	return NULL;
}
void*task2(void*arg)
{
	for(i=0;i<5;i++)
	{
		printf("task 2 running...\n");
	}
	return NULL;
}
int main()
{
pthread_t thread1,thread2;
pthread_create(&thread1,NULL,task1,NULL);
pthread_create(&thread2,NULL,task2,NULL);
pthread_join(thread1,NULL);
pthread_join(thread2,NULL);
getch();
return 0;
}
