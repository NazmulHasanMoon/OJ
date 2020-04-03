#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 502
int a[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,s,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        x=a[n/2];
        for(int i=0;i<n;i++)
            s+=abs(x-a[i]);
        cout<<s<<'\n';
    }
    return 0;
}
