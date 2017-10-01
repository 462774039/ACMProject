#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 100
#define PI 3.1415927
using namespace std;

int main(){
	double d,s;
	int quan,t=1;
	while(cin>>d>>quan>>s){
		if(!quan) break;
		double juli,shi;
		double l=d*PI*quan;
		juli=l/12.0/5280.0;
		shi=juli/s*60*60;
		printf("Trip #%d: %.2f %.2f\n",t,juli,shi);
		t++;
	}
	return 0;
}