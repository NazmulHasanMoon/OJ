#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int m,p,n,x,s;
    p=n=s=0;
    sf("%d",&m);
    for(int i=0;i<m;i++)
    {
        sf("%d",&x);
        if(x<0){
            if(p>0)
                p--;
            else
                s++;
        }
        else
            p+=x;
    }
    pf("%d\n",s);
    return 0;
}
