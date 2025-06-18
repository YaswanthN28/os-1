#include <stdio.h>
#include<conio.h>
void run_job(int job_id)
{
	printf("processing job %d ...\n",job_id);
}
int main()
{
	int i,job_count=3;
	for(i=1;i<=job_count;i++)
	{
		run_job(i);
	}
	getch();
	return 0;
}
