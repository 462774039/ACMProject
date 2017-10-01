#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 200
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string a,b,c,d,e,sum;
		cin>>a>>b;
		int flag=0;
		for(int i=a.length()-1;i>=0;i--){
			if(a[i]!='0') flag=1;
			if(flag) c+=a[i];
		}
		flag=0;
		for(int i=b.length()-1;i>=0;i--){
			if(b[i]!='0') flag=1;
			if(flag) e+=b[i];
		}
		if(c.length()<e.length()) swap(c,e);
		for(int i=0;i<c.length()-e.length();i++) d+='0';
		d+=e;
		int cc=0,i,len=0;
		for(i=1;i<=c.length();i++){
			int s=c[c.length()-i]+d[d.length()-i]-'0'-'0'+cc;
			sum[i]=s%10;
			cc=s/10;
		}
		if(cc!=0) sum[i]=cc,i++;
		flag=0;
		if(c.length()==0&&d.length()==0)
			cout<<0;
		else
			for(int j=1;j<=i-1;j++){
				if(sum[j]!=0) flag=1;
				if(flag) cout<<sum[j]+'0'-'0';
			}
		cout<<endl;
	}
	return 0;
}