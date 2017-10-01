#include <iostream>
#include <algorithm>
#define MAX 101
using namespace std;

struct lunch{
	string name;
	int jiage;
};

bool comp(lunch a,lunch b){
	return a.jiage<b.jiage;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int s,m,d;
		lunch ss[MAX];
		lunch mm[MAX];
		lunch dd[MAX];
		cin>>s>>m>>d;
		for(int i=0;i<s;i++) cin>>ss[i].name>>ss[i].jiage;
		for(int i=0;i<m;i++) cin>>mm[i].name>>mm[i].jiage;
		for(int i=0;i<d;i++) cin>>dd[i].name>>dd[i].jiage;
		sort(ss,ss+s,comp);
		sort(mm,mm+m,comp);
		sort(dd,dd+d,comp);
		cout<<ss[s/2].jiage+mm[m/2].jiage+dd[d/2].jiage<<' ';
		cout<< ss[s/2].name<<' '<<mm[m/2].name<<' '<<dd[d/2].name<<endl;
	}
	return 0;
} 