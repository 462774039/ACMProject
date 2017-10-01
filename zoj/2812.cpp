#include <iostream>
#include <cstdio>
#define MAX 300
using namespace std;

int main()
{
    while(1)
    {
        int i,ans=0;
        char str[MAX];
        gets(str);
        if(str[0]=='#') break;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]!=' ') ans+=(str[i]-64)*(i+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
