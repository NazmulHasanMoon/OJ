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
        cin>>n>>x;
        s=0;
        z=0;
        b=-1;
        e=n-1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i],s+=a[i];
            if(a[i]%x==0)z++;
            else
            {
                if(b==-1)
                    b=i;
                e=i;
            }

        }
        if(s%x!=0)
        {
            cout<<n<<'\n';
            continue;
        }
        if(z==n)
        {
            cout<<"-1\n";
            continue;
        }
        if(b==0||e==n-1){
            cout<<n-1<<line;
            continue;
        }
        y=z=0;
        int i;
        for(i=0;i<n;i++)
        {
            y+=a[i];
            if(y%x!=0)
                break;
        }
        y=i+1;
        for(i=n-1;i>=0;i--)
        {
            z+=a[i];
            if(z%x!=0)
                break;
        }
        z=n-i;
        cout<<n-min(y,z)<<'\n';
    }
    return 0;
}

