#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 300002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int a[sz];
map<int,int>mp;
int main()
{
    faster
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i],mp[a[i]]++;
    sort(a,a+n);
    bool t=false;
    int p,q,r;
    p=q=r=0;
    for(int i=n-2;i>=0;i--)
    {
        int x=a[i];
        for(int j=2;x<a[n-1];j++)
        {
            x=a[i]*j;
            if(mp.find(x)!=mp.end()){
                q+=mp[x];
                t=true;
                //cout<<q<<' ';
                //break;
            }
        }
        if(t){
            p=mp[a[i]];
            break;
        }
    }
    if(t&&(n-(p+q)))
        cout<<n-(p+q)<<'\n';
    else
        cout<<"-1\n";
    return 0;
}

