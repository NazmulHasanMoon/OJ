#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,x,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s+=x;
        }
        cout<<s<<'\n';
    }
    return 0;
}
