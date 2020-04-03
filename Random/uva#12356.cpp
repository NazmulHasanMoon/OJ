#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster
    int s,b,x,y;
    map<int,int>l,r;
    while(1)
    {
        cin>>s>>b;
        for(int i=1;i<=s;i++)
            l[i]=i-1,r[i]=i+1;
        //memset(a,-1,s*4);
        l[1]=-1;
        r[s]=-1;
        if(!s&&!b)
            break;
        for(int i=0;i<b;i++){
            cin>>x>>y;
            l[r[y]]=l[x];
            r[l[x]]=r[y];
            if(l[x]==-1)
                cout<<"* ";
            else
                cout<<l[x]<<' ';
            if(r[y]==-1)
                cout<<"*\n";
            else
                cout<<r[y]<<'\n';
        }
        cout<<"-\n";
    }
    return 0;
}
