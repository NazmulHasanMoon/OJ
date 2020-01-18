#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100003
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
    int n,k;
    string s;
    cin>>n>>k>>s;
    map<int,int>mp;
    int mn(sz);
    for(int i=0;i<n;i++)
        mn,mp[s[i]]++;
    int x=mp.size();
    if(x<k)
        cout<<"0\n";
    else
    {
        int w(0);
        for(auto i:mp)
        {
            w++;
            mn=min(mn,i.ss);
            if(w==k)
                break;
        }
        cout<<mn*k<<'\n';
    }

    return 0;
}

