
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
        cout<<n/2<<'\n';
    }
    return 0;
}

