#include<stdio.h>
#include<conio.h>
main()
{
int ms,mp[10],i,temp,n=0;
char ch='y';
printf("\n enter the total memory available (in bytes)--");
scanf("%d",&ms);
temp=ms;
for(i=0;ch=='y';i++,n++)
	{
		printf("\n enter memory required for process %d(in bytes--",i+1);
		scanf("%d",&mp[i]);
		if(mp[i]<=temp)
	{
		printf("\n memory is allocated for process%d",i+1);
		temp=temp-mp[i];
	}
	else
	{
		printf("\n memory is full");
		break;
	}
	printf("\ndo you want to continue(y/n)--");
	scanf("%c",&ch);
	}
	printf("\n\n total memory available-- %d",ms);
	printf("\n\n process \t\t memory allocted");
	for(i=0;i<n;i++)
	printf("\n\t%d\t\t%d",i+1,mp[i]);
	printf("\n\n total memory allocated is %d",ms-temp);
	printf("\n total external fragmentation is %d",temp);
	getch();
}
