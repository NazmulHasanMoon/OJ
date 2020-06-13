#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t,n;
    cin>>t;
    vector<int>v;
    while(t--)
    {
        v.clear();
        cin>>n;
        for(int i=1;i<=n;i<<=1)
        {
            v.pb(i);
            n-=i;
        }
        if(n)v.pb(n);
        sort(v.begin(),v.end());
        cout<<v.size()-1<<endl;
        for(int i=1;i<v.size();i++)
            cout<<v[i]-v[i-1]<<' ';
        cout<<"\n";
    }
    return 0;
}
