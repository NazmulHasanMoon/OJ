#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 1002
typedef long long ll;
int s[sz],d[sz];
int main()
{
    int n;
    ll c;
    sf("%d",&n);
    for(int i=0;i<n;i++)
        sf("%d %d",&s[i],&d[i]);
    c=s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]<=c)
        {
            while(s[i]<=c){
                s[i]+=d[i];
               // cout<<s[i]<<' ';
            }
            //cout<<endl;
        }
        c=s[i];
    }
    pf("%I64d\n",c);
    return 0;
}
