#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,m,x,l,r,u,v;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        bool flag=0;
        u=v=0;
        for(int i=0; i<m; i++)
        {
            cin>>l>>r;
            if(!flag&&x>=l&&x<=r)
                u=l,v=r,flag=1;
            else if(flag)
            {
                if((l>=u&&l<=v)||(r>=u&&r<=v)||x>=l&&x<=r)
                    u=min(l,u),v=max(v,r);
            }
        }
        cout<<(v-u+1)<<'\n';
    }
    return 0;
}
