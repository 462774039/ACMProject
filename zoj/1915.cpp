#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 1002
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[MAX];
		int avg=0;
		int n,count=0;
		float ans;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			avg+=a[i];
		}
		avg/=n;
		
		for(int i=0;i<n;i++){
			if(a[i]>avg) count++;
		}
		printf("%.3f%%\n",count/(n*1.0)*100);
	}
	return 0;
}