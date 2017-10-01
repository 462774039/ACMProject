#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAX 1001
using namespace std;

int main()
{
	string a,b;
	while(cin>>a>>b){
		if(a.length()<b.length()) swap(a,b);
		int len_a=a.length();
		int len_b=b.length();
		int c=0;
		string sum;
		int j=len_b;
		for(int i=len_a-1;i>=0;i--){
			j--;
			if(a[i]>='0'&&a[i]<='9') a[i]-='0';
			if(a[i]>='a'&&a[i]<='j') a[i]=a[i]-'a'+10;
			char s=a[i];
			if(j>=0){
				if(b[j]>='0'&&b[j]<='9') b[j]-='0';
				if(b[j]>='a'&&b[j]<='j') b[j]=b[j]-'a'+10;
				s+=b[j];
			}
			s+=c;
			c=s/20;
			s%=20;
			if(s<10) s+='0';
			else s=s-10+'a';
			sum+=s;
		}
		while(c){
			char s=0;
			s+=c;
			c=s/20;
			s%=20;
			if(s<10) s+='0';
			else s=s-10+'a';
			sum+=s;
		}
		int  flag=0;
		for(int i=sum.length()-1;i>=0;i--){
			if(sum[i]!='0') flag=1;
			if(flag==0&&i!=0&&sum[i]=='0');
			else cout<<sum[i];
		}
		cout<<endl;
	}
	return 0;
}