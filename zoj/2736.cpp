#include <iostream>
using namespace std;

int main()
{
	int num;
	while(cin>>num){
		int a=num/100;
		int b=num/10%10;
		int c=num%10;
		if(a*a*a+b*b*b+c*c*c==num) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
	return 0;
}