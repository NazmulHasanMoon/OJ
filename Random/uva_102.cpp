#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define ff first
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a1,a2,a3,b3,b2,b1,c3,c2,c1;
    while(cin>>a1>>b1>>c1>>a2>>b2>>c2>>a3>>b3>>c3)
    {
        ll x=a1+a2+a3+b3+b2+b1+c3+c2+c1;
        map<string,int>a;
        a["BGC"]=a1+b2+c3,a["BCG"]=a1+c2+b3,a["GBC"]=b1+a2+c3,a["GCB"]=b1+c2+a3,a["CBG"]=c1+a2+b3,a["CGB"]=c1+b2+a3;
        ll z=max(a["BGC"],max(a["BCG"],max(a["GBC"],max(a["GCB"],max(a["CBG"],a["CGB"])))));
        int i;
        for(auto i:a)
        {
            if(z==i.ss)
            {
                cout<<i.ff<<' '<<(x-z)<<"\n";
                break;
            }
        }
    }
    return 0;
}
