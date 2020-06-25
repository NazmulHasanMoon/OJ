#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define ff first
#define sz 200005
int a[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    bool t=0;
    if(k==0)
    {
        a[k]--;
        if(a[k])
            cout<<a[k]<<'\n';
        else
            cout<<"-1\n";
        return 0;
    }
    if(a[k]!=a[k-1])
        cout<<a[k-1]<<'\n';
    else
        cout<<"-1\n";
    return 0;
}
