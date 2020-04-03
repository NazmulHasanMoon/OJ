#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100000001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all( x)   x.begin(),x.end()

using namespace std;

/*----------------- Start Here ----------------*/

int main()
{
    int n,pos,l,r,a,b,c,d,x,y,z;
    x=0;
    sf("%d %d %d %d",&n,&pos,&l,&r);
    a=1,b=n;
    if(pos<l&&pos>r)
        cout<<"0\n";
    else
    {
        if(abs(pos-l)<=abs(pos-r))
        {
            if(a<l)
            {
                if(pos>=l)
                    x+=pos-l,x++;
                else if(l-pos==0)
                    x++,pos=l;
                else
                    x+=l-pos,x++;
                a=l;
                pos=l;
            }
            if(b>r)
            {
                if(pos<r)
                    x+=r-pos,x++;
                //else
                   // x++;
                else if(pos-r==0)
                    x++,pos=r;
                else
                    x+=pos-r,x++;
                pos=r;
                b=r;
            }
        //    cout<<x<<endl;
        }
        else
        {
            if(b>r)
            {
                if(pos<r)
                    x+=r-pos,x++;
                else if(pos-r==0)
                    x++,pos=r;
                else
                    x+=pos-r,x++;
                pos=r;
            }
            if(a<l)
            {
                if(pos>=l)
                    x+=pos-l,x++;
                else
                    x++;
                pos=l;
                a=l;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}

