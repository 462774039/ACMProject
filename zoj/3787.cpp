#include <stdio.h>
#define MAX 20000
int time[MAX];
int stu[MAX];
int open[MAX];

void quicksort(int str[],int num)
{
	int i=0,j=num-1;
	int key;
	key=str[0];
	if(num>1)
	{
		while(i<j)
		{
			for(;j>i;j--)
			{
				if(str[j]<key)
				{
					str[i++]=str[j];
					break;
				}
			}
			for(;i<j;i++)
			{
				if(str[i]>key)
				{
					str[j--]=str[i];
					break;
				}
			}	
		}
		str[i]=key;
		quicksort(str,i);
		quicksort(str+i+1,num-i-1);
	}
} 

void quicksort1(int str[],int num,int str2[])
{
	int i=0,j=num-1;
	int key,key1;
	key=str[0];
	key1=str2[0];
	if(num>1)
	{
		while(i<j)
		{
			for(;j>i;j--)
			{
				if(str[j]<key)
				{
					str2[i]=str2[j];
					str[i++]=str[j];	
					break;
				}
			}
			for(;i<j;i++)
			{
				if(str[i]>key)
				{
					str2[j]=str2[i];
					str[j--]=str[i];		
					break;
				}
			}	
		}
		str[i]=key;
		str2[i]=key1;
		quicksort1(str,i,str2);
		quicksort1(str+i+1,num-i-1,str2+i+1);
	}
} 


int main()
{
	int i,j;
	int t,n,l;
	int hh,mm,ss;
	int temp,road,con=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&l);
		for(i=0;i<n;i++)
		{
			scanf("%d:%d:%d",&hh,&mm,&ss);
			time[i]=ss+mm*60+hh*3600;
			stu[i]=i;
		}
		quicksort1(time,n,stu);
		road=time[0];
		open[0]=stu[0]+1;
		con=1;
		for(i=1;i<n;i++) 
		{
			if(time[i]-l>=road)
			{
				road=time[i];
				open[con]=stu[i]+1;
				con++;
			}
		}
		quicksort(open,con);
		printf("%d\n",con);
		for(i=0;i<con;i++)
		{
			printf("%d",open[i]);	
			if(i!=con-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}