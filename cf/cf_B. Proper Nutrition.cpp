#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int n,a,b,x,y,p,q,r;
    sf("%d %d %d",&n,&a,&b);
    int i,j;
    x=a+b;
    y=n/x;
    bool t=true;
    if(a>b)
        p=a,r=b;
    else
        p=b,r=a,t=false;
    x=r;
    for(i=y; x<=n; i++)
    {
        x=r*i;
        q=n-x;
        if(x>n)
            break;
        if(q%p==0)
        {
            j=q/p;
            if(t)
                pf("YES\n%d %d\n",j,i);
            else
                pf("YES\n%d %d\n",i,j);
            return 0;
        }
        if(x==n){
            if(t)
                pf("YES\n%d %d\n",j,i);
            else
                pf("YES\n%d %d\n",i,j);
            return 0;
        }
    }
    x=p;
    for(i=y; x<=n; i++)
    {
        x=p*i;
        q=n-x;
        if(x>n)
            break;
        if(q%r==0)
        {
            j=q/r;
            if(t)
                pf("YES\n%d %d\n",i,j);
            else
                pf("YES\n%d %d\n",j,i);
            return 0;
        }
        if(x==n)
        {
            if(t)
                pf("YES\n%d %d\n",i,j);
            else
                pf("YES\n%d %d\n",j,i);
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
