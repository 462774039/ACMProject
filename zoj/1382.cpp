#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int d;
	cin>>d;
	while(d--){
		long n;
		cin>>n;
		int o,p;
		for(int i=0;i<=n;i++){
			long t;
			t=(long)pow(2.0,i);
			if(t>n) break;
			for(int j=0;j<=n;j++){
				if(j*t == n) o=j,p=i;
			}
		}
		cout<<o<<' '<<p<<endl;
	}
	return 0;
}