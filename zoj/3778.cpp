#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	cin>>t;;
	while(t--)
	{
		int i,n,m,temp,sum=0,bu,maxn=0;
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			sum+=temp;
			maxn=max(maxn,temp);
		}
		bu=sum/m;
		if(sum%m) bu++;
		if(bu<maxn) bu=maxn;
		if(maxn>bu||m>=n) bu=maxn;
		cout<<bu<<endl;
	}
	return 0;
} 