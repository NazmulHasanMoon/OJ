#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define ff first
#define ss second
int a[102],b[102],c;
int main()
{
    faster
    int n,m,k,re(0);
    cin>>n>>m>>k;
    set<int>s[m+2];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        s[b[i]].insert(i);
    }
    /*for(int i=1;i<=m;i++)
    {
        for(auto j:s[i])
        {
            cout<<j<<' ';
        }
        cout<<"=="<<i<<'\n';
    }*/
    int x,y,z,u;
    for(int i=0;i<k;i++){
        cin>>c;
        x=a[c];
        y=x;
        z=c;
        for(auto j:s[b[c]])
        {
            u=j;
            ///cout<<a[j]<<'-'<<y<<'\n';
            if(y<a[j])
            {
                y=a[u];
                z=u;

            }
        }
        //cout<<y<<endl;
        if(z!=c)
            re++;
    }
    cout<<re<<'\n';
    return 0;
}
