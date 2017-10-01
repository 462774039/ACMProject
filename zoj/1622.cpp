#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 10001
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int sz,ans=0; 
		for(int i=0;i<n;i++){
			scanf("%d",&sz);
			if(sz!=i%2) ans++;
		}
		ans=min(ans,n-ans);
		printf("%d\n",ans);
	}
	return 0;
}