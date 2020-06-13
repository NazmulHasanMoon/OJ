#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int n,m;
    while(t--)
    {
        cin>>n>>m;
        n=n*m;
        cout<<(n+1)/2<<'\n';
    }
    return 0;
}
