#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int t,cs(1),n,s(0),x;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        if(st=="report")
            cout<<s<<'\n';
        else
            cin>>x,s+=x;
    }
    return 0;
}

