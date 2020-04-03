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

int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,mx=INT_MIN,mn=INT_MAX;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mx=max(mx,x);
            mn=min(mn,x);
            m[x]++;
        }
            bool ck1,ck0;
            ck1=ck0=false;
            for(auto i:m)
            {
                if(i.ff&1)
                    ck1=true;
                else
                    ck0=true;
            }
            //cout<<"no\n";
        if(ck1&&ck0)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
    return 0;
}




