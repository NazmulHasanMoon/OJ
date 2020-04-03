#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
vector<pair<int,int>>v;
bool comp(const pair<int,int>&x, const pair<int,int>&y)
{
    if(x.ff<=y.ff)
    {
        if(x.ss<=y.ss)
            return 1;
        else
            return 0;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),comp);
    for(auto i: v)
    {
        cout<<i.ff<<' '<<i.ss<<endl;
    }
    return 0;
}
