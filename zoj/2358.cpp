#include <iostream>
using namespace std; 
int a[]={1,1,2,6,24,120,720,5040,40320,362880};

int main(){
	int n;
	while(cin>>n){
		if(n < 0) break;
		int num = 0;
		int flag = 0;
		for(int i=9;i>=0;i--){
			if(num+a[i] > n) continue;
			else if(num+a[i] == n){
				flag=1;
				break;
			}else{
				num+=a[i];
			} 
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
} 