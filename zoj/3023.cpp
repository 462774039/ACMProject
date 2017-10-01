#include <iostream>
#define MAX 101
using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m){
		if(n==0&&m==0) break;
		int a[MAX];
		int b[MAX];
		int sum_a=0,sum_b=0,flag=0;
		for(int i=0;i<n;i++) cin>>a[i],sum_a+=a[i];
		for(int i=0;i<m;i++) cin>>b[i],sum_b+=b[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int s1=sum_a-a[i]+b[j];
				int s2=sum_b-b[j]+a[i];
				if(s1==s2){
					cout<<a[i]<<' '<<b[j]<<endl;
					flag=1;
					break;
				}
			}
			if(flag) break;
		}
		if(!flag) cout<<-1<<endl;
	}
	return 0;
}