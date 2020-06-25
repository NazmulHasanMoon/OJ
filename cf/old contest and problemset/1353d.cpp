#include<bits/stdc++.h>
using namespace std;
#define sz 200001
#define ss second
#define ff first
int arr[sz];
bool comp(pair<int,pair<int,int>>A,pair<int,pair<int,int>>B)
{
    if(A.ff==B.ff)
        return A.ss.ff<B.ss.ff;
    return A.ff<B.ff;
}
struct CompareHeight {
    bool operator()(pair<int,pair<int,int>>const& p1, pair<int,pair<int,int>> const& p2)
    {
        // return "true" if "p1" is ordered
        // before "p2", for example:
        if(p1.ff==p2.ff)
            return p1.ss.ff>=p2.ss.ff;
        return p1.ff < p2.ff;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,n,i,x,d,p,q,l,r,u,v;
    cin>>t;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,CompareHeight>bfs;
    while(t--)
    {
        cin>>n;
        i=0;
        bfs.push({n,{1,n}});
        while(!bfs.empty())
        {
            p=bfs.top().ss.ss;
            q=bfs.top().ss.ff;
            d=bfs.top().ff;
            bfs.pop();
            if(d&1)x=(p+q)/2;
            else x=(p+q-1)/2;
            arr[x]=++i;
            r=x-1;
            l=x+1;
            u=r-q+1;
            v=p-l+1;
            if(r>=q)bfs.push({u,{q,r}});
            if(l<=p)bfs.push({v,{l,p}});
        }
        for(int j=1;j<n;j++)
            cout<<arr[j]<<' ';
        cout<<arr[n]<<'\n';
    }
    return 0;
}
