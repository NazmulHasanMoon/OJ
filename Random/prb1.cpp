#include<bits/stdc++.h>
using namespace std;
//#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 500002
//bitset<sz>bs;
bool bs[sz];
int a[sz];
int main()
{
    //faster
    //freopen("cmnto.txt","r",stdin);///input file: cmntin.txt
    //freopen("cmnto.txt","w",stdout);
    int n;
    cin>>n;
    //bs.reset();
    //map<int,int>bs;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(bs[a[i]]==0)
            bs[a[i]]==1;
        else
            bs[a[i]]==0;
    }
    for(int i=0;i<n;i++)
    {
        if(bs[a[i]]==1)
            cout<<a[i]<<' ';bs[a[i]]=0;
    }
    cout<<'\n';
    return 0;
}
