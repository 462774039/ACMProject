#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath> 
#define MAX 100
using namespace std;

int main(){
	int a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		if(!a&&!b&&!c&&!d&&!e&&!f) break;
		int h=a+b;
		int w,l;
		for(int i=0;i<=h;i++){
			w=i;
			l=h-i;
			if(a+c+e+w==b+d+f+l){
				break;
			}
		}
		cout<<"Anna's won-loss record is "<<w<<'-'<<l<<'.'<<endl;
	}
	return 0;
}