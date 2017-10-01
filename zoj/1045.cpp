#include <iostream>
using namespace std;
int main()
{
    float a;
    while(cin>>a)
    {
        float sum=0;
        int i=2,car=0;;
        if(a==0) break;
        while(sum<=a) sum+=1.0/i++,car++;
        cout<<car<<" card(s)"<<endl;
    }
}
