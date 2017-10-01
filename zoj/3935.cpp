#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 100002
using namespace std;

bool rn(int sz){
	if((sz%4==0&&sz%100!=0)||(sz%400==0)) return 1;
	else return 0;
}


int main()
{
	for(int i=32;i<=704;i++){
		int year=2*i*i-i;
		if(rn(year)) printf("%d\n",year);
	}
	return 0;
}