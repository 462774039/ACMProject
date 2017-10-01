#include <iostream>
#define MAX 1001
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int hash[MAX]={0};
		int max=0,maxn;
		int n,sz;
		int flag=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>sz;
			hash[sz]++;
		}
		for(int i=0;i<=1000;i++){
			if(hash[i]==max) flag=1;
			if(hash[i]>max) maxn=i,max=hash[i],flag=0;
		}
		if(flag) cout<<"Nobody";
		else cout<<maxn;
		cout<<endl;
	}
	return 0;
} 