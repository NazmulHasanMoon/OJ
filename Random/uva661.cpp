#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,t=0;
    while(cin>>n>>m>>c)
    {
        if(!n&&!m&&!c)
            break;
        int x[n],y,s(0),mx=-343569;
        map<int ,int>mp;
        for(int i=0;i<n;i++)
            cin>>x[i],mp[i+1]=0;
        for(int i=0;i<m;i++)
        {
            cin>>y;
            if(mp[y]%2==0)
                s+=x[y-1];
            else
                s-=x[y-1];
            if(s<=c)
                mx=max(mx,s);
            mp[y]++;
        }
        if(s<=c)
            printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",++t,mx);
        else
            printf("Sequence %d\nFuse was blown.\n\n",++t);
    }
    return 0;
}
