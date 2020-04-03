#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m))
    {
        if(n==0&&m==0)
            break;
        map<int,int>mp;
        int x,c(0);
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            mp[x]=1;
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&x);
            if(mp.find(x)!=mp.end())
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
