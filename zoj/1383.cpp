#include <iostream>
using namespace std;

void chage(int num)
{
    int i=0;
    while(num)
    {
        int t;
        t=num%2;
        num/=2;
        if(t) cout<<i;
        if(num&&t) cout<<' ';
        i++;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        chage(num);
        cout<<endl;
    }
    return 0;
}
