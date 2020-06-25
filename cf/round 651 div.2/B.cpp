
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
    int t,n,x,y,z,p,q,s,b,e;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>odd,even;
        for(int i=0;i<n+n;i++)
        {
            cin>>x;
            if(x&1)odd.push_back(i+1);
            else even.push_back(i+1);
        }
        x=odd.size();
        y=n+n-x;
        --n;
        for(int i=0;i<x&&n;i+=2)
        {
            if(i+1<x){
            --n;
            cout<<odd[i]<<' '<<odd[i+1]<<'\n';
            }
        }
        for(int i=0;i<y&&n;i+=2)
        {
            if(i+1<y){
            --n;
            cout<<even[i]<<' '<<even[i+1]<<'\n';
            }
        }
    }
    return 0;
}
