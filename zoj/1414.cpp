#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--){
		int x,y;
		int ans=-1;
		cin>>x>>y;
		if(x==y){
			if(x%2) ans=x*2-1;
			else ans=x*2;
		}
		if(y+2==x){
			if(y%2) ans=y*2+1;
			else ans=y*2+2;
		}
		if(ans==-1) cout<<"No Number"<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}