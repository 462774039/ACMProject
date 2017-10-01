#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a[3];
	char b[]={'a','b','c'};
	int t=1,f;
	float c;
	while(cin>>a[0]>>a[1]>>a[2])
	{
		if(!a[0]&&!a[1]&&!a[2]) break;
		cout<<"Triangle #"<<t<<endl;
		if((a[2]<a[0]||a[2]<a[1])&&a[2]!=-1)
		{
			cout<<"Impossible."<<endl<<endl;
			t++;
			continue;
		}
		for(int i=0;i<3;i++) if(a[i]==-1) f=i;
		if(f==0) c=sqrt(a[2]*a[2]-a[1]*a[1]);
		if(f==1) c=sqrt(a[2]*a[2]-a[0]*a[0]);
		if(f==2) c=sqrt(a[0]*a[0]+a[1]*a[1]);
		printf("%c = %.3f\n\n",b[f],c);
		t++;
	}
	return 0;
}