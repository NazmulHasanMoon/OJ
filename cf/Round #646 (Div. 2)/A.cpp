#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define ff first
int a[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int o,e;
        o=e=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]&1)
                o++;
            else
                e++;
        }
        if(o>=x)
        {
            if(x&1){
                cout<<"YES\n";
                continue;
            }
            else
                x=1;
        }
        else if(o<=x&&o)
        {
            if(o&1)
                x-=o;
            else
                x-=(o-1);
        }
        if(e>=x&&o)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
