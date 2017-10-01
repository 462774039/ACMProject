#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	while(cin>>num){
		if(num==0) break;
		int p=0,ans;
		while(num){
			ans=num%2;
			num/=2;
			p++;
			if(ans) break;
		}
		ans=(int)pow(2.0,p-1);
		cout<<ans<<endl;
	}
	return 0;
}