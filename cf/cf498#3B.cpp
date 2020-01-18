#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 2005
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
int a[sz],b[sz];
map<int,int>mp;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cout.tie(0);
    int n,k,x,s(0),y,mx(-1);
    cin>>n>>k;

    for(int i=0;i<n;i++)
        cin>>a[i],b[i]=a[i],mp[b[i]]=0;
    sort(b,b+n);
    for(int i=n-1;i>=n-k;i--)
    {
        mp[b[i]]++;
        s+=b[i];
    }
    cout<<s<<'\n';
    s=0;
    for(int i=0;i<n;i++)
    {
        s++;
        if(mp[a[i]]>=1)
        {
            if(k==1)
                cout<<s+(n-1-i)<<' ';
            else
                cout<<s<<' ';
            s=0;
            mp[a[i]]--;
            k--;
        }
    }
    return 0;
}

