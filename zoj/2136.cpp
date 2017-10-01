#include <iostream>
#define MAX 10001
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a[MAX];
		int dp[MAX]={1};
		int n,ans=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i],dp[i]=1;
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]+1);
			}
		}
		for(int i=0;i<n;i++) ans=max(ans,dp[i]);
		cout<<ans;
		if(t) cout<<endl<<endl;
	} 
	return 0;
}