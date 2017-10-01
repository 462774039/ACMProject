#include <iostream>
#define MAX 101
using namespace std;

int main()
{
    int t=0;
    while(1)
    {
        int a[MAX];
        int n,i,sum=0,minc=0;
        cin>>n;
        if(!n) break;
        t++;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum/=n;
        for(i=0;i<n;i++)
        {
            if(a[i]<sum) minc+=sum-a[i];
        }
        cout<<"Set #"<<t<<endl<<"The minimum number of moves is "<<minc<<"."<<endl<<endl;
    }
    return 0;
}
