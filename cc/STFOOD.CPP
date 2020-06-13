#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,c,s,p,v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        while(n--)
        {
            cin>>c>>p>>v;
            s=max(s,(p/(c+1))*v);
        }
        cout<<s<<endl;
    }
    return 0;
}
