#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    while(1)
    {
        cin>>n>>m;
        int z,w,mx=0;
        if(!n&&!m)
            break;
        if(n>m)
            swap(n,m);
        for(int i=n;i<=m;i++)
        {
            z=1;
            long long x=(long long)i;
            if(x&1)
                x=3*x+1;
            else
                x/=2;
            while(x!=1)
            {
                z++;
                if(x&1)
                    x=(3*x)+1;
                else
                    x/=2;
            }
            if(mx<z)
            {
                mx=z;
                w=i;
            }
        }
        cout<<"Between "<<n<<" and "<<m<<", "<<w<<" generates the longest sequence of "<<mx<<" values.\n";
    }
    return 0;
}
