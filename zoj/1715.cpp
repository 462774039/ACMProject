#include iostream
#include algorithm
#include cstdio
#include cstring
#include cmath 
#define MAX 105
using namespace std;

struct hash{
	int num;
	int v;
};

bool comp(hash a,hash b)
{
	if(a.v==b.v) return a.numb.num; 
	else return a.vb.v;
}

int main(){
	int n,q;
	while(scanf(%d %d,&n,&q)!=EOF){
		if(!n&&!q) break;
		hash a[MAX];
		for(int i=0;i=103;i++) a[i].num=a[i].v=0;
		for(int i=0;in;i++){
			int d;
			scanf(%d,&d);
			for(int j=0;jd;j++){
				int sz;
				scanf(%d,&sz);
				a[sz].num=sz;
				a[sz].v++;
			}
		}
		sort(a,a+102,comp);
		if(a[0].vq) printf(0n);
		else printf(%dn,a[0].num);
	}
	return 0;
}