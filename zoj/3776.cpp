#include <stdio.h>

int main()
{
	int i;
	int t,n,m;
	unsigned int cal=0,sere=0,zl;
	scanf("%d",&t);
	while(t--)
	{
		cal=0,sere=0;
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%d",&zl);
			cal+=zl;
		}
		
		for(i=0;i<m;i++)
		{
			scanf("%d",&zl);
			sere+=zl;
		}
		if(cal>sere) printf("Calem");
		if(cal<sere) printf("Serena");
		if(cal==sere) printf("Draw");
		printf("\n");
	}
	return 0;
} 