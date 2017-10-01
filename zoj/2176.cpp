#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n){
		if(n<1) break;
		int ans=0,a,b,t;
		cin>>a>>b;
		ans+=a*b;
		for(int i=1;i<n;i++){
			cin>>a>>t;
			b=t-b;
			ans+=a*b;
			b=t;
		}
		cout<<ans<<' '<<"miles"<<endl;
	}
	return 0;
}