#include <iostream>
#define MAX 100010
using namespace std;
int a[MAX];

int main()
{
    int n;
    int t=1,i=2;
    while(i++,t<=100000) if(i%3==0||i%5==0) a[t++]=i;
    while(cin>>n) cout<<a[n]<<endl;
    return 0;
}