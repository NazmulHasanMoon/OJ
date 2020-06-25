#include<bits/stdc++.h>
using namespace std;
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
map<char,int>mp;
#define sz 200005
int main()
{
    faster
    int n,k,l(0),m(1),p=-1;
    char s[sz];
    cin>>n>>k;
    //cin.ignore('\n');
    cin>>s;
    ///cout<<s<<endl;
    for(int i=0; i<n; i++)
        mp[s[i]]++;//cout<<s[i]<<endl;
    //char x;
    for(auto j:mp)
    {
        l=m=0;
        //cout<<j.ff<<endl;
        for(int i=0; i<n; i++)
        {
            if(s[i]==j.ff)
                m++;
            else
            {
                l+=m/k;
                m=0;
            }
        }
        if(s[n-1]==j.ff)
            l+=m/k;
        p=max(p,l);
    }

    cout<<p<<'\n';
    return 0;
}
