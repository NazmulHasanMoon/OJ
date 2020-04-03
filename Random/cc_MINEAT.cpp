#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100002
int a[sz];
int main()
{
    int t;
    sf("%d",&t);
    while(t--)
    {
        int n,h;
        sf("%d %d",&n,&h);
        int b[n+2],c(0);
        for(int i=0; i<n; i++)
            sf("%d",&a[i]);//c+=a[i],b[i]=c;
        sort(a,a+n);
        for(int i=0;i<n;i++)
            c+=a[i],b[i]=c;
        int x,y,z;
        bool t=1;
        for(int i=0; i<n&&t; i++)
        {
            int w=b[n-1]-b[i];
            z=i+1+(w/a[i]);
            //cout<<z<<endl;
            if(w%a[i]!=0)
                z++;
            if(z<=h){
                y=a[i];
                int v=i+1;
                //cout<<a[i]<<"*\n";
                for(int j=i+1;j<n;j++)
                {
                    v+=a[j]/a[i];
                    if(a[j]%a[i]!=0)
                        v++;
                    if(v>h){
                        t=1;
                        break;
                    }
                    else
                        t=0;
                }
            }
        }
        pf("%d\n",y);
    }
    return 0;
}
