#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<3||x==4||x==5||x==8||x==11)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
