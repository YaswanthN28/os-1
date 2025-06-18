#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int alloc[10][10],max[10][10];
	int avail[10],work[10],total[10];
	int i,j,k,n,need[10][10];
	int m;
	int count=0,c=0;
	char finish[10];
	printf("Enter the no.of processes and resourse :");
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	finish[i]='n';
	printf("Enter the claim matrix:\n");
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&max[i][j]);
	printf("enter the allocation matrix:\n");
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&alloc[i][j]);
	printf("resource vector :");
	for(i=0;i<m;i++)
	scanf("%d",&total[i]);
	for(i=0;i<m;i++)
	avail[i]=0;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	avail[j]+=alloc[i][j];
	for(i=0;i<m;i++)
	work[i]=avail[i];
	for(j=0;j<m;j++)
	work[j]=total[j]-work[j];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	need[i][j]=max[i][j]-alloc[i][j];
	A:
	for(i=0;i<n;i++)
	{
		c=0;
	    for(j=0;j<m;j++)
	    if((need[i][j]<=work[j])&&(finish[i]=='n'))
	    c++;
	    if(c==m)
	    {
	    	printf("All the resources can be allocated to process %d",i+1);
	    	printf("\n\n Available resoures are:");
	    	for(k=0;k<m;k++)
	    	{
	    		work[k]+=alloc[i][k];
	    		printf("%4d",work[k]);
			}
			printf("\n");
			finish[i]='y';
			printf("\n process %d executer!:%c\n",i+1,finish[i]);
			count++;
		}
	}
	if(count!=n)
	goto A;
	else
	printf("\n system is in safe mode");
	printf("\n The given state is safe state");
	getch();	
}
