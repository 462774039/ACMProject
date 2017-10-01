#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

struct color
{
	int r;
	int g;
	int b;
};

int main()
{
	struct color a[1000];
	int rr,gg,bb,f;
	float d;
	for(int i=0;i<16;i++) cin>>a[i].r>>a[i].g>>a[i].b;
	while((cin>>rr>>gg>>bb)&&(rr!=-1&&gg!=-1&&bb!=-1))
	{
		float maxd=200000;
		for(int i=0;i<16;i++)
		{
			d=sqrt((a[i].r-rr)*(a[i].r-rr)+(a[i].g-gg)*(a[i].g-gg)+(a[i].b-bb)*(a[i].b-bb));
			if(d<maxd) maxd=d,f=i;
		}
		printf("(%d,%d,%d) maps to (%d,%d,%d)\n",rr,gg,bb,a[f].r,a[f].g,a[f].b);
	}
	return 0;
}