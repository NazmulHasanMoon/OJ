#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(!m)
            pf("%d does not divide %d!\n",m,n);
        else
        {
            int w=m;
            map<int,int>a,b;
            while(m%2==0)
            {
                a[2]++;
                m/=2;
            }
            for(int i=3; m>1&&i<50005; i+=2)
            {
                while(m%i==0)
                {
                    a[i]++;
                    m/=i;
                }
            }
            if(m!=1&&n<m)
                pf("%d does not divide %d!\n",w,n);
            else
            {
                bool t=true;
                for(auto i:a)
                {
                    int y,z;
                    y=z=i.ff;
                    int x=n;
                    b[z]=0;
                    while(y<=n&&y<50005)
                    {
                        b[z]+=n/y;
                        y*=z;
                    }
                    if(i.ss>b[i.ff])
                    {
                        t=false;
                        break;
                    }
                }
                if(t)
                    pf("%d divides %d!\n",w,n);
                else
                    pf("%d does not divide %d!\n",w,n);
            }
            a.clear();
            b.clear();
        }

    }
    return 0;
}
