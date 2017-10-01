#include <iostream>
using namespace std;

int main()
{
	float a;
	int b,c;
	while(cin>>a>>b>>c){
		if(a==0&&b==0&&c==0) break;
		int flag=0;
		string s;
		if(a<=4.5&&b>=150&&c>=200){
			s="Wide Receiver";
			flag=1;
		}
		if(a<=6.0&&b>=300&&c>=500){
			if(flag) s+=' ';
			s+="Lineman";
			flag=1;
		}
		if(a<=5.0&&b>=200&&c>=300){
			if(flag) s+=' ';
			s+="Quarterback";
			flag=1;
		}
		if(!flag) s="No positions";
		cout<<s<<endl;
	}
	return 0;
}