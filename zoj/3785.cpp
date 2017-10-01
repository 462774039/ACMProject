#include <iostream>
#include <cmath>
using namespace std;
string str[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int a[300]={0};

long long f(int b)
{
    long long sum=1;
    int c=b%7; 
    for(int i=0;i<b;i++)
    {
        sum*=c;
        sum%=7;
    }
    return sum;
}

int main()
{
	int t, n;
    for(int i=1;i<295;i++)
    {
        int temp=f(i);
        temp=(temp+a[i-1])%7;
        a[i]=temp;
    }
    cin>>t;
    while(t-- && cin >> n) cout<<str[a[n%294] ]<<endl;
    return 0;
}
