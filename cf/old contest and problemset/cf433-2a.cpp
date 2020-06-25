#include<bits/stdc++.h>
using namespace std;
#define sz 1000
int q[sz];
int main()
{
    int n,j(0);
    scanf("%d",&n);
    map<int,int>p;
    int l=(int)ceil(sqrt(n+0.0));
    p[1]=1;
    p[2]=2;
    j=2;
    if(n==3)
        printf("%d %d\n",p[j-2],p[j-1]);
    else
    {
        int x=n/2;
        for(int i=4; i<=n; i+=2)
            q[i]=1;
        for(int i=3; i<=n; i+=2)
        {
            if(!q[i])
            {
                p[i]=i;
                j++;
                //cout<<j<<' '<<p[j-1]<<endl;
                if(i<=l)
                {
                    for(int k=i*i; k<=n; k+=i*2)
                        q[k]=1;
                }
            }
        }
        bool t=0;
        while(!t)
        {
            cout<<x<<endl;
            for(int i=x,k=x; i<j,k>=0; k--)
            {
                if(p[i]+p[k]==n){
                    t=1;
                    printf("%d %d\n",p[k],p[i]);
                    break;
                }
            }
            x++;
        }
    }
    return 0;
}
