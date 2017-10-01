#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 10000
using namespace std;

struct stu{
	string name;
	int v;
};

bool comp(stu a,stu b){
	return a.v<b.v;
}

int main(){
	int c,k,g;
	int n;
	while(scanf("%d",&n)!=EOF&&n!=-1){
		stu a[MAX];
		for(int i=0;i<n;i++){
			int v;
			cin>>c>>k>>g>>a[i].name;
			v=c*k*g;
			a[i].v=v;	
		}
		sort(a,a+n,comp);
		cout<<a[n-1].name<<" took clay from "<<a[0].name<<'.'<<endl;
	}
	return 0;
}