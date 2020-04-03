#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>q;
int main()
{
    ll n,a;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    while(cin>>n)
    {
        if(!n)
            break;
        ll s,t,j;
        s=t=0;
        for(ll i=0;i<n;i++)
            cin>>a,q.push_back(a);
        j=n;
        sort(q.begin(),q.end());
        for(ll i=0;i<j;)
        {
            t=q[i++];
            t+=q[i++];
            s+=t;
            if(i==j)
                break;
            q.push_back(t);
            sort(q.begin()+i,q.end());
            j++;
        }
        cout<<s<<'\n';
        q.clear();
    }
    return 0;
}
