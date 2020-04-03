#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
typedef long long ll;
int main()
{
    int t;
    sf("%d",&t);
    while(t--)
    {
        double p,x,y,z;
        int c;
        sf("%lf %lf %lf",&p,&x,&y);
        if(y<x)
            swap(x,y);
       // pf("%lf\n",y);
        z=floor(sqrt(y))-ceil(sqrt(x))+1;
        //pf("%lf\n",z);
        c=z;
        if(c<z)
            c++;
        pf("%d\n",c);
    }
    return 0;
}
