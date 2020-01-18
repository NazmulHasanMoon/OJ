#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#define ss 105
using namespace std;
char c[ss];
int main()
{
    int i,n,k,g,t;
    g=t=0;
    cin>>n>>k;
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c",&c[i]);
        if(c[i]=='G')
            g=i;
        else if(c[i]=='T')
            t=i;
    }
    if(g>t)
        swap(g,t);
    for(i=g;i<=t;i+=k)
    {
        if(c[i]=='#')
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if((t-g)%k==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
