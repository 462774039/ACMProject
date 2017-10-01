#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 100002
using namespace std;

int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a+b+c+d>=80) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}