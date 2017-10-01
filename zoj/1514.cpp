#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 10001
using namespace std;

int main(){
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		if(!n&&!m) break;
		int ans=0;
		int hash[MAX]={0};
		for(int i=0;i<m;i++){
			int num;
			scanf("%d",&num);
			hash[num]++;
			if(num>n||num==0) hash[num]=2;
		}
		for(int i=0;i<=n;i++){
			if(hash[i]>1) ans++;
		}
		printf("%d\n",ans);
	} 
	return 0;
}