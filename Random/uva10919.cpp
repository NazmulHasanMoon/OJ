#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,m;
    while(cin>>k)
    {
        if(k==0)
            break;
        cin>>m;
        int v;
        map<int,int>mp;
        for(int i=0; i<k; i++)
            cin>>v,mp[v]=1;
        bool t=true;
        for(int j=0; j<m; j++)
        {
            int r,c,x;
            cin>>c>>r;
            for(int i=0; i<c; i++)
            {
                cin>>x;
                //cout<<x<<endl;
                if(mp.find(x)!=mp.end())
                    r--;
            }
            if(r>0)
                t=false;
        }
        if(t)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
