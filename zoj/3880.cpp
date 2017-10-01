#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,num,ans=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>num;
			if(num>6000) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
} 