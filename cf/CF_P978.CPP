#include<bits/stdc++.h>
using namespace std;
#define sz 52
int a[sz];
unordered_map<int,bool>mp;
stack<int>v;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--)
    {
        if(mp.find(a[i])==mp.end())
            mp[a[i]]=1,v.push(a[i]);
    }
    cout<<v.size()<<endl;
    while(!v.empty())
        cout<<v.top()<<' ',v.pop();
    return 0;
}
