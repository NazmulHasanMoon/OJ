#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int n;
    cin>>n;
    bool ck;
    while(n--){
            ck=true;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int x=s.size();

    for(int i=1;i<x;i++)
    {
        if(s[i]-s[i-1]!=1)
            ck=false;
    }
    if(ck)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    }

    return 0;
}
