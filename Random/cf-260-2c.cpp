#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
int main()
{
    int n,x,y;
    map<int,long long>mp;
    set<int>st;
    sf("%d",&n);
    long long s(0);
    for(int i=0;i<n;i++){
        sf("%d",&x);
        mp[-x]+=x;
        st.insert(-x);
    }
    map<int,long long>::iterator it;
    set<int>::iterator itt;
    s+=it->ss;
    y=it->ff;
    it++;
    itt=st.begin();
    for(;it!=mp.end();)
    {

    }
    return 0;
}
