#include<bits/stdc++.h>
using namespace std;
int a[16];
long long b[16];
int main()
{
    long long s(0),mx=(-1);
    int n=14;
    for(int i=0; i<n; i++)
        cin>>a[i],b[i]=(long long)a[i];
    for(int i=0; i<n; i++)
    {
        s=0;
        if(a[i]&1)
        {
            int x=a[i];
            bool t=1;
            int y;
            b[i]=0;
            while(t)
            {
                for(int j=i+1; j<n&&x>0; j++)
                {
                    y=(int)ceil((double)x/14.0);
                    b[j]+=(long long)y;
                    long long z=(b[j]-(long long)y);
                    if(!(b[j]&1))
                        s+=b[j];
                    else if((b[j]&1)&&!(z&1))
                        s-=z;
                    //printf("b[%d]=%lld %lld\n",j,b[j],z);
                    x-=y;
                }
                for(int j=0; j<=i&&x>0; j++)
                {
                    y=(int)ceil((double)x/14.0);
                    b[j]+=(long long)y;
                    long long z=(b[j]-(long long)y);
                    if(!(b[j]&1))
                        s+=b[j];
                    else if((b[j]&1)&&!(z&1))
                        s-=z;//cout<<s<<' ';
                    //printf("b[%d]=%lld %lld\n",j,b[j],z);
                    x-=y;
                }
                if(x<=0)
                    t=0;
            }
            for(int j=0; j<n; j++)
                b[j]=(long long)a[j];
        }
        mx=max(mx,s);

    }
    cout<<mx<<'\n';
    return 0;
}
