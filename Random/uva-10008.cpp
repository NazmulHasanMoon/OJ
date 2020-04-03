#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cin.ignore();
    map<char,int>mp;
    while(n--)
    {
        string s;
        s.clear();
        getline(cin,s);
        int l=s.size();
        for(int i=0; i<l; i++)
        {
            if(islower(s[i])||isupper(s[i]))
            {
                s[i]=toupper(s[i]);
                mp[s[i]]++;
            }
        }
    }
    int j(0),temp,tm,k;
    vector<pair<char,int>>v;
    for(auto i:mp)
        v.push_back({i.ff,i.ss}),j++;
    for(int i=0; i<j; i++)
    {
        for(int k=i+1; k<j; k++)
        {
            if(v[i].ss<v[k].ss)
            {
                swap(v[i].ss,v[k].ss);
                swap(v[i].ff,v[k].ff);
            }
            else if(v[i].ss==v[k].ss&&v[i].ff>v[k].ff)
            {
                swap(v[i].ss,v[k].ss);
                swap(v[i].ff,v[k].ff);
            }
        }
    }
    for(auto i:v)
        cout<<i.ff<<' '<<i.ss<<'\n';
    return 0;
}
