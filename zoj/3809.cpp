#include <iostream>
#define MAX 100000
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a[MAX]={0};
		int n,ans=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<n-1;i++){
			if(a[i]>a[i-1]&&a[i]>a[i+1]) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}