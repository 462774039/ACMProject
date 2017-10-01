#include <iostream>
#define MAX 30
using namespace std;

int ans,w,h;
bool v[MAX][MAX]={0};

void dfs(int x,int y)
{
    if(x>w||x<1) return;
    if(y>h||y<1) return;
    if(v[y][x]) return;

    v[y][x]=1;
    ans++;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
}

int main()
{
    while(cin>>w>>h)
    {
        char a[MAX][MAX];
        int i,j;
        int x,y;
        if(!w||!h) break;
        ans=0;
        for(i=1;i<=h;i++)
            for(j=1;j<=w;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='@') v[i][j]=0,y=i,x=j;
                if(a[i][j]=='#') v[i][j]=1;
                if(a[i][j]=='.') v[i][j]=0;
            }
        dfs(x,y);
      cout<<ans<<endl;
    }
    return 0;
}
