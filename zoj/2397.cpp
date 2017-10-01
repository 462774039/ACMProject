#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 1002
using namespace std;

int main(){
	int n;
	while(cin>>n&&n){
		int a[MAX],b[MAX];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		sort(a,a+n);
		sort(b,b+n);
		int j=0,ans=0,to=0,ko=0,te=n-1,ke=n-1;
		while(to<=te){
			if(a[to]<b[ko]) ans-=200,to++,ke--;
			else if(a[to]>b[ko]) ans+=200,to++,ko++;
			else{
				if(a[te]>b[ke]) te--,ke--,ans+=200;
				else if(a[te]<b[ke]||a[to]<b[ke]) ans-=200,to++,ke--;
				else to++,ko++,te--,ke--;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}