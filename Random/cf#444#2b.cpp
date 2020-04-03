#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sz 100
int r[sz];
int main()
{
    int n,j(0),s(0);
    sf("%d",&n);
    int x[6]={100,100,100,100,100,100};
    int y[6]={100,100,100,100,100,100};
    int z[6]={100,100,100,100,100,100};
    while(j<n)
    {
        if(j==0)
        {
            for(int i=0; i<6; i++)
                sf("%d",&x[i]),r[x[i]]=1;
        }
        else if(j==1)
        {
            for(int i=0; i<6; i++)
                sf("%d",&y[i]),r[y[i]]=1;
        }
        else
        {
            for(int i=0; i<6; i++)
                sf("%d",&z[i]),r[z[i]]=1;
        }
        j++;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            int s1,s2,s3,s4,s5,s6,s7;
            s1=x[i]*10+y[j];
            s2=x[i]*10+z[j];
            s3=y[i]*10+z[j];
            s4=y[j]*10+x[i];
            s5=z[j]*10+x[i];
            s6=z[j]*10+y[i];
            r[s1]=r[s2]=r[s3]=r[s4]=r[s5]=r[s6]=1;
        }
    }
    j=1;
    while(r[j++]&&j<101)
        s++;
    pf("%d\n",s);
    return 0;
}
