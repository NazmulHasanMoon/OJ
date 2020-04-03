#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t,i(1);
    sf("%d",&t);
    while(t--){
        int n,x,y,h,l;
        h=l=0;
        sf("%d %d",&n,&x);
        for(int i=1;i<n;i++){
            sf("%d",&y);
            if(y>x)
                h++;
            else if(y<x)
                l++;
            x=y;
        }
        pf("Case %d: %d %d\n",i++,h,l);
    }
    return 0;
}
