#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,m;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c>>n>>m;
        if(c=='r'||c=='Q')
            cout<<min(n,m)<<'\n';
        else if(c=='k')
            cout<<((n*m)+1)/2<<'\n';
        else
            cout<<((n+1)/2)*((m+1)/2)<<'\n';
    }
    return 0;
}
