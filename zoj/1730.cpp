#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 40000
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int num,ans=0;
		scanf("%d",&num);
		for(int i=num;i>=3;i-=2){
			ans+=(i-2);
		}
		printf("%d\n",ans);
	}
	return 0;
}