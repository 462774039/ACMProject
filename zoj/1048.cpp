#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	float sum=0,sz;
	for(int i=0;i<12;i++){
		cin>>sz;
		sum+=sz;
	}
	printf("$%.2f",sum/12);
	return 0;
} 