#include <iostream>
#include <cstdio>
using namespace std;
char a[]="}{][+=_-,./:\"'<>?`1234567890rtyuiop\\asdfghjkl;xcvbnmZzQqWwEe";
char b[]="+?=/}]{[wvzS_-WVZ`1234567890pyfgcrl\\aoeuidhtnsqjkxbm";

int main()
{
	char str[100000];
	while(gets(str))
	{
		for(int i=0;str[i]!='\0';i++)
		{
			bool dx=0,f=0;
			if(str[i]>='A'&&str[i]<='Z'&&str[i]!='Z'&&str[i]!='z'&&str[i]!='Q'&&str[i]!='q'&&str[i]!='W'&&str[i]!='w'&&str[i]!='E'&&str[i]!='e')
				dx=1,str[i]+=32;
			for(int j=0;a[j]!='\0';j++)
			{
				if(str[i]==a[j])
				{
					if(dx&&(b[j]>='a'&&b[j]<='z')) cout<<char(b[j]-32);
					else if(str[i]=='Z') cout<<":";
					else if(str[i]=='z') cout<<";";
					else if(str[i]=='Q') cout<<"\"";
					else if(str[i]=='q') cout<<"'";
					else if(str[i]=='W') cout<<"<";
					else if(str[i]=='w') cout<<",";
					else if(str[i]=='E') cout<<">";
					else if(str[i]=='e') cout<<".";
					else if(b[j]=='\\') cout<<"\\";
					else cout<<b[j];
					f=1;
					if(f==1) continue;
				}
			}
			if(!f) cout<<str[i];
		}
		cout<<endl;
	}
	return 0;
}