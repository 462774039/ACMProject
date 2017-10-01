#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 100002
using namespace std;

int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--){
		int a[MAX];
		int f[MAX]={0};
		int sz=0,maxn=0;
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=n-1;i>=0;i--){
			if(a[i]!=0){
				sz++;
				f[i]=sz;
			}
			else f[i]=f[i+1];
		}
		for(int i=0;i<n;i++){
			sz=a[i]+f[i+1];
			maxn=max(maxn,sz);
		}
		printf("%d\n",maxn);
	}
	return 0;
}