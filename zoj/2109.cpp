#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAX 1001
using namespace std;

struct s{
	int f;
	int j;
};

bool comp(s a,s b){
	return a.j/1.0/a.f > b.j/1.0/b.f;
}

int main()
{
	int m,n;
	while(cin>>m>>n){
		if(m==-1&&n==-1) break;
		s a[MAX];
		double ans=0;
		for(int i=0;i<n;i++) cin>>a[i].j>>a[i].f;
		sort(a,a+n,comp);
		for(int i=0;i<n;i++){
			if(m>=a[i].f){
				ans+=a[i].j;
				m-=a[i].f;
			}
			else{
				ans+=(m*1.0)/a[i].f*a[i].j;
				break;
			}
		}
		printf("%.3f\n",ans);
	}
	return 0;
}