#include <iostream>
#define MAX 100
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--){
		int sum=0,k;
		cin>>k;
		for(int i=0;i<k;i++){
			int sz;
			cin>>sz;
			sum+=sz;
		}
		sum-=k-1;
		cout<<sum<<endl;
	} 
	return 0;
}