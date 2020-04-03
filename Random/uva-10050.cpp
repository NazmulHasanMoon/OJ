#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define sz 10002
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,d,n,x,re;
    cin>>t;
    while(t--)
    {
        cin>>d>>n;
        re=0;
        bool vis[3652];
        memset(vis,0,sizeof(vis));
        while(n--)
        {
            cin>>x;
            for(int i=x;i<=d;i+=x)
            {
                if(i%7!=0&&(i+1)%7!=0&&!vis[i])
                    re++,vis[i]=1;
            }
        }
        cout<<re<<'\n';
    }
    return 0;
}
