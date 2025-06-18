#include<stdio.h>
#include<conio.h>
int fr[3],n,m;
void display()
{
	int i;
	for(i=0;i<m;i++)
	printf("%d\t",fr[i]);
	printf("\n");
}
void main()
{
	int i,j,page[20];
	int flag1=0,flag2=0,pf=0;
	float pr;
	printf("enter length of the reference string:");
	scanf("%d",&n);
	printf("enter the reference string:");
	for(i=0;i<n;i++)
	scanf("%d",&page[i]);
	printf("enter no of frames");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	fr[i]=-1;
	pf=m;
	for(j=0;j<n;j++)
	{
		flag1=0;
		flag2=0;
		for(i=0;i<m;i++)
		{
			if(fr[i]==page[j])
			{
				flag1=1;
				flag2=1;
				break;
			}
		}
		if(flag1==0)
		{
			for(i=0;i<m;i++)
			{
				if(fr[i]==-1)
				{
					fr[i]=page[j];
					flag2=1;
					break;
				}
			}
		}
		if(flag2==0)
		{
			printf("page%d is replace\n",fr[0]);
			for(i=0;i<m;i++)
			{
				fr[i]=fr[i+1];
			}
			fr[m-1]=page[j];
			pf++;
		}
		printf("page %d is in frames:",page[j]);
		display();
	}
	pr=(float)pf/n*100;
	printf("page fault rate=%f\n",pr);
	getch();
}
