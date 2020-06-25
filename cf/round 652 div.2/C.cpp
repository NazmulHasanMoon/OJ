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
    int t,n,x,y,z,p,q,s,b,e,k;
    cin>>t;
    ll sum;
    while(t--)
    {
        sum=0;
        cin>>n>>k;
        vector<int>v(n),v2(k);
        for(int i=0;i<n;i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        p=0;
        q=n-1;
        for(int i=0;i<k;i++){
            cin>>x;
            if(x==1){
                sum+=(ll)v[q]+(ll)v[q];
                if
            }
            else
                sum+=(ll)v[0]+(ll)v[n-i-1];
        }
        cout<<sum<<'\n';
    }
    return 0;
}

