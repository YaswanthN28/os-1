#include<stdio.h>
#include<conio.h>
int main()
{
	int ms,ps,nop,np,rempage,i,j,x,y,pa,offset;
	int s[10],fno[10][20];
	printf("enter the memory size--");
	scanf("%d",&ms);
	printf("enter the page size--");
	scanf("%d",&ps);
	nop=ms/ps;
	printf("\n the no of pages available in memory are--%d\n",nop);
	printf("eneter the no of process--");
	scanf("%d",&np);
	rempage=nop;
	for(i=1;i<=np;i++)
	{
		printf("\n enter the no of pages required for p[%d]--",i);
		scanf("%d",&s[i]);
		if(s[i]>rempage)
		{
			printf("\n memory is full \n");
			break;
		}
		rempage=rempage-s[i];
		printf("enter pagetable for p[%d]--",i);
		for(j=0;j<s[i];j++)
		scanf("%d",&fno[i][j]);
	}
	printf("\n enter logical address to find phically adreess\n");
	printf("enter process no and page num and offient--");
	scanf("%d%d%d",&x,&y,&offset);
	if(x>np||y>=s[x]||offset>=ps)
	printf("\n invalid process or page number of offset\n");
	else
	{
		pa=fno[x][y]*ps+offset;
		printf("\n the physical address is--%d\n",pa);
		getch();
	}
}
