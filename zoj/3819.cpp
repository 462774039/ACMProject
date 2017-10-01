#include <iostream>
#define MAX 100
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a[MAX]={0};
		int b[MAX]={0};
		int n,m,ans1,ans2,sum1=0,sum2=0;
		float avg1,avg2;
		cin>>n>>m;
		for(int i=0;i<n-1;i++) cin>>a[i],sum1+=a[i];
		for(int i=0;i<m;i++) cin>>b[i],sum2+=b[i];
		avg2=sum2/(m*1.0);
		int flag=0;
		for(int i=0;i<=100;i++){
			int sum1_temp=sum1+i;
			avg1=sum1_temp/(n*1.0);
			int sum3=sum1;
			int sum4=sum2+i;
			float avg3=sum3/((n-1)*1.0);
			float avg4=sum4/((m+1)*1.0);
			if(avg3>avg1&&avg4>avg2){
				if(!flag) ans1=ans2=i;
				else ans2=i;
				flag=1;
			}
		}
		cout<<ans1<<' '<<ans2<<endl;
	}
	return 0;
}