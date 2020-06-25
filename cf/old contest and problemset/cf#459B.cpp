#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
map<string,string>mp;
int main()
{
    int n,m;
    cin>>n>>m;
    string a,b;
    //cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        mp[b]=a;
        //cout<<a<<'-'<<b<<endl;
    }
    for(int i=0;i<m;i++)
    {
        string x,y;
        string z;
        cin>>x>>y;
        int j=0;
        while(y[j]!=';')
            z.push_back(y[j]),j++;
        cout<<x<<' '<<y<<" #"<<mp[z]<<endl;

    }
    return 0;
}
