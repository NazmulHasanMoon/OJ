#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int z,n,m,b,x,y,prev,ans;
    while(t--)
    {
        ans=0;
        cin>>n>>b>>m>>x;
        prev=x/b;
        ans++;
        for(int i=1;i<m;i++){
            cin>>y;
            x=y/b;
            ///cout<<x<<' '<<prev<<'\n';
            if(x!=prev)ans++,prev=x;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
