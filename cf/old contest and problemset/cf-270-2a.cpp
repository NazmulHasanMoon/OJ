#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
map<int,int>m;
int main()
{
    int n,l;
    cin>>n;
    l=(int)sqrt(n-0.0);
    for(int i=4; i<=n-4; i+=2)
        m[i]=1;
    for(int i=3; i<=n-4; i+=2)
    {
        if(!m[i])
        {
            m[i]=0;
            if(i<=l)
            {
                for(int j=i*i; j<=n-4; j+=i*2)
                    m[j]=1;
            }
        }
    }
    map<int,int>::iterator it=m.begin();
    for(;it!=m.end(); it++)
    {
        if(m[it->ff]&&m[n-it->ff])
        {
            cout<<it->ff<<' '<<n-it->ff<<endl;
            break;
        }
    }
    return 0;
}
