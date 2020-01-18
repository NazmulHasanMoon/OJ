#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200002
int main()
{
    faster
    int n,a,b,x(-1);
    cin>>n;
    map<int,int>mp;
    vector<int>v;
    for(int i=0;i<n;i++)
        cin>>a,mp[a]=i;
    for(int i=0;i<n;i++){
        cin>>b;
        int y=mp[b];
        if(x<y)
            v.push_back(y-x),x=y;
        else
            v.push_back(0);
    }
    for(auto i:v)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
