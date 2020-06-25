#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
#define ll long long
string s;
int main()
{
    int n;
    ll re(0);
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(!((s[i]-'0')&1))
            re+=(ll)i+1;
    }
    cout<<re<<'\n';
    return 0;
}
