#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int a,c;
    while(sf("%d",&a),a!=0)
    {
        sf("%d",&c);
        int x[c],y;
        sf("%d",&x[0]);
        y=a-x[0];
        for(int i=1; i<c; i++){
            sf("%d",&x[i]);
            if(x[i]<x[i-1])
                y+=(x[i-1]-x[i]);
        }
        pf("%d\n",y);
    }
    return 0;
}
