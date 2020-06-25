#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second

map<pair<int,int>,pair<int,int>>par;
vector<pair<int,int>>v;
/*bool comp(pair<int,int>a,pair<int,int>b)
{
    return a.ss<=b.ss;
}*/
pair<int,int> root(pair<int,int>x)
{
    while(par[x]!=x)
    {
        par[x]=par[par[x]];
        x=par[x];
    }
    return x;
}
void weighted_union(pair<int,int> &A,pair<int,int>&B)
{
    pair<int,int> root_A = root(A);
    pair<int,int> root_B = root(B);
    if(root_A.ff==root_B.ff||root_A.ss==root_B.ss||A.ff==B.ff||A.ss==B.ss)
    {
        ///cout<<A.ff<<'-'<<A.ss<<':'<<B.ff<<'-'<<B.ss<<"!\n";
        if(root_A.ff < root_B.ff)
            par[ root_A ] = par[root_B];
        else
            par[ root_B ] = par[root_A];
    }
}
int main()
{
    faster
    int n,x,y,p,q,sz=1000;
    cin>>n;
    cin>>x>>y;
    set<pair<int,int>>st;
    v.push_back({x,y});
    par[ {x,y}]= {x,y}; ///si[x]=1,si[y]=1;
    if(n==1)
        return cout<<"0\n",0;
    for(int i=1; i<n; i++)
    {
        cin>>p>>q;
        v.push_back({p,q});
        par[ {p,q}]= {p,q};
    }
    /*for(auto i:v)
        cout<<i.ff<<' '<<i.ss<<endl;*/
    //cout<<"debug:\n";
    // sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            weighted_union(v[i],v[j]);
    }
    /*for(auto i:v)
        cout<<i.ff<<' '<<i.ss<<endl;*/
    for(int i=0; i<n; i++)
        st.insert(root(v[i]));
    cout<<st.size()-1<<'\n';
    /*for(auto i:st)
        cout<<i.ff<<' '<<i.ss<<endl;*/
    return 0;
}
