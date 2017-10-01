#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 100
using namespace std;

int main(){
	int sz;
	while(cin>>sz&&sz!=-1){
		int n=1;
		int a[100]={0};
		int hash[MAX]={0};
		int ans=0;
		a[0]=sz;
		hash[sz]=1;
		while(1){
			cin>>a[n];
			if(a[n]==0) break;
			hash[a[n]]=1;
			n++;
		}
		for(int i=0;i<n;i++){
			if(hash[a[i]*2]==1) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}