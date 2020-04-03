#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
int p[100],vis[105];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("in.txt.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,j(0);
    p[j++]=2;
    for(int i=4;i<=100;i+=2)
        vis[i]=1;
    for(int i=3;i<=100;i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            if(i<11)
            {
                for(int k=i*i;k<=100;k+=i*2)
                    vis[k]=1;
            }
        }

    }
    while(1)
    {
        cin>>n;
        if(!n)
            break;
        cout<<setw(3)<<n<<"! =";
        for(int i=0,k=1;i<j&&p[i]<=n;)
        {
            int x,y;
            x=0,y=p[i];
            while(y<=n)
            {
                x+=n/y;
                y*=p[i];
            }
            i++;
            if(k<=15)
                cout<<setw(3)<<x,k++;
            if(k==16&&i<j&&p[i]<=n)
                cout<<"\n      ",k=1;
        }
        cout<<"\n";
    }
    return 0;
}
