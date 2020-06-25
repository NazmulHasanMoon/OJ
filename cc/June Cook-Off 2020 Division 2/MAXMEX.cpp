#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define line '\n';
#define sz 100001
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> new_data_set;
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int t,n,m,mex,ans,x,y,p;
    cin>>t;
    new_data_set v;
    while(t--)
    {
        cin>>n>>m;
        ans=0;
        v.clear();
        vector<int>v2(n);
        for(int i=0; i<n; i++)
            cin>>x,v.insert(x);
        for(auto i: v)
            v2[i]=1;
        //y=v.order_of_key(m);
        mex=INT_MAX;
        for(int i=1;i<=m;i++)
        {
            if(!v2[i])
            {
                mex=i;
                break;
            }
        }
        if(mex<m)
        {
            cout<<"-1\n";
            continue;
        }
        if(mex>m)
        {
            x=v.order_of_key(m-1);
            p=v.order_of_key(m+1);
            y=v.order_of_key(m);
            cout<<y+n-p<<'\n';
        }
        else
            cout<<n<<'\n';
    }
    return 0;
}
