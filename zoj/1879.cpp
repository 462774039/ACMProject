#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 30000
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int hash[MAX]={0};
		int a[MAX];
		int ans=0;
		cin>>a[0];
		for(int i=1;i<n;i++){
			int num;
			cin>>a[i];
			num=abs(a[i]-a[i-1]);
			hash[num]=1;
		}
		for(int i=1;i<n;i++){
			if(hash[i]) ans++;
		}
		if(ans!=n-1) cout<<"Not jolly";
		else cout<<"Jolly";
		cout<<endl;
	}
	return 0;
}