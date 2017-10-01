#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--){
		int h,c;
		cin>>h>>c;
		if(h<c) cout<<"impossible";
		else{
			int x=(h+c)/2;
			int y=h-x;
			if(x+y==h&&x-y==c) cout<<x<<' '<<y;
			else cout<<"impossible";
			
		}
		cout<<endl;
	}
	return 0;
}