#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 200
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF&&n){
		int h[MAX]={0},w[MAX]={0},hf=0,wf=0,flag=0;
		int a[MAX][MAX];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				scanf("%d",&a[i][j]);
				w[i]+=a[i][j];
				h[j]+=a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			if(h[i]%2){
				if(hf!=0){
					flag=1;
					break;
				}
				else{
					hf=i;
				}
			}
		if(w[i]%2){
				if(wf!=0){
					flag=1;
					break;
				}
				else{
					wf=i;
				}
			}
		}
		if(!hf&&!wf) printf("OK\n");
		else if(!flag&&hf&&wf) printf("Change bit (%d,%d)\n",wf,hf);
		else if(flag){
			printf("Corrupt\n");
		}
		
	}
	return 0;
}