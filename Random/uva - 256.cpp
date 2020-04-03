#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,sq[10001];
    for(int i=0;i<=9999;i++)
        sq[i]=i*i;
    while(cin>>n)
    {
        int z=(int)pow(10.0,n);
        int x,y,w,v;
        for(int i=0;i<=9999;i++)
        {
            if(sq[i]>=z)
                break;
            w=(int)pow(10.0,n/2);
            x=sq[i]/w;
            y=sq[i]%w;
            v=(x+y)*(x+y);
            if(v==sq[i])
                cout<<setw(n)<<setfill('0')<<v<<'\n';
        }
    }
    return 0;
}
