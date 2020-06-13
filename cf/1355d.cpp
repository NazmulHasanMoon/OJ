#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,k;
    cin>>n>>s;
    if(n+n>s)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(int i=1;i<n;i++)
            cout<<"2 ";
        cout<<s-2*(n-1)<<"\n1\n";
    }
    return 0;
}
