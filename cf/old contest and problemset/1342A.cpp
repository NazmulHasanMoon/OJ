#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,x,y,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        ll p,q;
        p=(ll)(x+y)*(ll)a;
        q=(ll)(max(x,y)-min(x,y))*(ll)a+(ll)min(x,y)*(ll)b;
        cout<<min(p,q)<<endl;
    }
    return 0;
}
