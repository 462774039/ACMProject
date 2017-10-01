#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;
struct color
{
    string ys;
    int ci;
};

bool comp(color x,color y)
{
    return x.ci>y.ci;
}

int main()
{
    int n;
    while(cin>>n)
    {
        struct color a[MAX];
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            cin>>a[i].ys;
            for(int j=0;i<i;j++)
            {
                if(a[i].ys==a[j].ys) a[i].ci++;
            }
        }
        sort(a,a+n,comp);
        cout<<a[0].ys<<endl;
    }
    return 0;
}
