#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sf scanf
#define pf printf
#define ll long long
int main()
{
    ll x,y,z;
    sf("%I64d %I64d",&x,&y);
    z=y-1;
    if(z==x)
        pf("Yes\n");
    else
    {
        y--;
        //cout<<y<<" "<<x<<endl;
            //y--;
            while(y<x&&y>0)
            {
                z=y;
                y*=3;
            }

            if(y==x)
                pf("Yes\n");
            else
            {
                while(z<x&&z>0)
                    z+=2;
                if(z==x)
                    pf("Yes\n");
                else
                    pf("No\n");
            }
        //}
    }
    return 0;
}
