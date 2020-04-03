#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,c,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a&&b&&c&&(a+b+c==180))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
