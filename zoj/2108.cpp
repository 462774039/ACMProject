#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int temp=0,a,time=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a>temp) time+=(a-temp)*6;
			else time+=(temp-a)*4;
			temp=a;
		}
		time+=5*n;
		cout<<time<<endl;
	}
	return 0;
}