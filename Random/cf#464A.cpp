#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 10005
#define ll long long
int b[sz];
int main()
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        if(b[i]==i)
        {
            cout<<"NO\n";
            return 0;
        }

    }
    for(int i=1;i<=n;i++)
    {
        if(b[b[b[i]]]==i)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
