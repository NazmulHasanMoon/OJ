#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t,n;
    sf("%d",&t);
    int a,b,c,x;
    while(t--)
    {
        sf("%d",&n);
        a=b=c=0;
        for(int i=0;i<n;i++){
            sf("%d",&x);
            if(x>0)
                a++;
            else if(x<0)
                b++;
        }
        if(a>=b)
            pf("YES\n");
        else
            pf("NO\n");
    }
    return 0;
}
