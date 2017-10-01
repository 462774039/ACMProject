#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 100
using namespace std;

int main(){
	float sz;
	cin>>sz;
	while(sz!=999){
		float num;
		cin>>num;
		if(num==999) break;
		printf("%.2f\n",num-sz);
		sz=num;
	}
	cout<<"End of Output"<<endl;
	return 0;
}