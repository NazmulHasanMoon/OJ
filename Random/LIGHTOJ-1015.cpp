#include<bits/stdc++.h>
using namespace std;
#define sf scanf
int main()
{
    int t,i(1);
    sf("%d",&t);
    while(i<=t)
    {
        int n,s(0),x;
        cin>>n;
        while(n--)
        {
            sf("%d",&x);
            if(x>0)
                s+=x;
        }
        printf("Case %d: %d\n",i++,s);
    }
    return 0;
}
