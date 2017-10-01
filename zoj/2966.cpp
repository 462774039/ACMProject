#include <iostream>
#include <algorithm>
#define MAXN 501
#define MAXE 125000
using namespace std;
int p[MAXE];
int r[MAXE];

struct bian
{
	int w;
	int u;
	int v;
};

bool comp(bian x,bian y)
{
	return x.w<y.w;
}

int find(int x)
{
	return !p[x]||p[x]==x?p[x]=x:p[x]=find(p[x]);
}

int main()
{
	struct bian b[MAXE];
	int t;
	cin>>t;
	while(t--)
	{

		int n,e,ans=0;
		cin>>n>>e;
		for(int i=0;i<e;i++) cin>>b[i].u>>b[i].v>>b[i].w,p[i]=0;
		sort(b,b+e,comp);
		for(int i=0;i<e;i++)
		{
			int x=find(b[i].u);
			int y=find(b[i].v);
			if(x!=y) {ans+=b[i].w;p[x]=y;p[x]=y;}
		}
		cout<<ans<<endl;
	}
	return 0;
}