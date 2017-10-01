#include <iostream>
using namespace std;

int main()
{
    int t,t1=0;
    cin>>t;
    while(t--)
    {
        string str;
        int i;
        cin>>str;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]!='Z') str[i]+=1;
            else str[i]='A';
        }
        t1++;
        cout<<"String #"<<t1<<endl<<str<<endl;
        cout<<endl;
    }
    return 0;
}
