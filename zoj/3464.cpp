#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAX 10001
using namespace std;

bool comp(int a,int b)
{
	return a>b;
}

int main()
{
	int rs;
	cin>>rs;
	while(rs--)
	{ 
		int v[MAX];
		int n,t,l;
		float s=0;
		cin>>n>>t>>l;
		for(int i=0;i<n;i++) cin>>v[i];
		sort(v,v+n,comp);
		for(int i=0;i<n;i++)
		{
			int temp=v[i]*t;
			if(l-temp>=0)
			{
				s+=t;
				l-=temp;
			}
			else
			{
				s+=(l*1.0)/v[i];
				l=0;
			}
			if(!l) break;
		}
		if(l) cout<<-1<<endl;
		else printf("%.2f\n",s);
	}
	return 0;
	
} 