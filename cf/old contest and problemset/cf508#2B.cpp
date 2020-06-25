#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
map<int,bool>mp;
int main()
{
    faster
    int n;
    cin>>n;
    int x=(n*(n+1))/2;
    bool t=false;
    int r;
    cout<<x<<endl;
    for(int i=2;i<n;i++)
    {
        if(x%i==0&&i*2!=x)
        {
            t=true;
            r=i;
            cout<<r<<'*';
        }
    }
    if(t)
    {
        cout<<"Yes\n";
        vector<int>v;

        bool run=true;
        int j,p;
        j=1,p=0;
        while(run)
        {
            if(r-j==j||mp[r-j]==1){
                v.push_back(r);
                p++;
                mp[r]=1;
                run=false;
            }
            else
                r=r-j,v.push_back(j),p++,mp[j]=1;
        }
        cout<<p<<' '<<n-p<<'\n';
        for(auto j : v)
            cout<<j<<' ';
        for(int i=1;i<=n;i++)
        {
            if(!mp[i])
                cout<<i<<' ';
        }
    }
    else
        cout<<"No\n";
    return 0;
}

