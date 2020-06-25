#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define line '\n';
#define sz 100001
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> new_data_set;
int a[sz];
new_data_set ms;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,x,y,z,p,q,b,e;
    cin>>t;
    string s,ans;
    while(t--)
    {
        cin>>n>>s;
        x=0;
        y=0;
        z=0;
        p=0;
  //      ans.clear();
//        vector<int>zero,one;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1'&&!y)
                y=1,p=i;
            else if(s[i]=='0'&&y)
                z=1;
            if(s[i]=='0')
                x=i;
        }
        if(!z)
            cout<<s<<'\n';
        else
        {
            for(int i=0;i<p;i++)
                cout<<s[i];
            for(int i=x;i<n;i++)
                cout<<s[i];
            cout<<'\n';
        }
    }
    return 0;
}
