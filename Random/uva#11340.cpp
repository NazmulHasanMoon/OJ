#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main()
{
    faster
    ll n,k,m,x,re;

    map<char,ll>mp;
    cin>>n;
    while(n--)
    {
        re=0;
        cin>>k;
        while(k--)
        {
            char c;
            cin>>c>>x;
            mp[c]=x;
        }
        cin>>m;
        cin.ignore();
        while(m--)
        {
            string s;
            getline(cin,s);

            for(int i=0; s[i]!='\0'; i++)
            {
                if(mp.find(s[i])!=mp.end())
                    re+=mp[s[i]];
            }
        }
        double rl=(double)(re+0.0)/100.0;
        cout<<setprecision(2)<<fixed<<rl<<"$\n";
        mp.clear();
    }
    return 0;
}
