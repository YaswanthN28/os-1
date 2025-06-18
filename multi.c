#include<stdio.h>
#include<conio.h>
#include<pthread.h>
void*task1(void*arg)
{
	printf("running task1...\n");
	return NULL;
}
void*task2(void*arg)
{
	printf("running task2...\n");
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
