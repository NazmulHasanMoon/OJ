#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int n,k,l(0);
    cin>>n>>k;
    char c[n+2];

    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        mp[c[i]]++;
    }
    map<char,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>k)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
