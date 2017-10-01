#include <iostream>
using namespace std;

int main(){
	long long n;
	while(cin>>n&&n!=0){
		long long ans=0;
		while(n!=1){
			if(n%2==0) n=n>>1;
			else n=(n+1)>>1;
			ans++;
		}
		cout<<ans<<endl;
	}
}