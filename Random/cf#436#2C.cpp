#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int a,b,f,k,s,c(0),x,y,z;
    sf("%d %d %d %d",&a,&b,&f,&k);

    z=b;
    x=a-f;
    if(f>b)
    {
        pf("-1\n");
        return 0;
    }
    for(int i=0; i<k; i++)
    {
        if(!(i&1))
        {
            z-=f;
            if(x>z&&i==k-1)
                c++,z=b-x;
            else if((x+x)>z&&i<k-1)
                c++,z=b-x;
            else
                z-=x;
            if(z<x&&i<k-1)
            {
                pf("-1\n");
                return 0;
            }
        }
        else
        {
            z-=x;
            if(f>z&&i==k-1)
                c++,z=b-f;
            else if((f+f)>z&&i<k-1)
                c++,z=b-f;
            else
                z-=f;
            if(z<f&&i<k-1)
            {
                pf("-1\n");
                return 0;
            }
        }
        if(z<0)
        {
            //cout<<z<<' '<<i<<' '<<f<<' '<<x<<endl;
            pf("-1\n");
            return 0;
        }
    }
    cout<<c<<endl;
    return 0;
}
