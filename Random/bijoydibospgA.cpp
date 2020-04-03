#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long n,x,y,z,p,s;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        double T,r;
        s=0;
        scanf("%I64d",&n);
        if(n==1)
            printf("Case %d: 1\n",i);
        else if(n==0)
            printf("Case %d: -1\n",i);
        else
        {
            T=pow((n+0.0),(1.0/3.0));
            //cout<<T<<endl;
            r=pow(T,2);
            p=((long long)r-(long long)T)+1;
            // cout<<r<<" "<<" "<<p<<endl;
            printf("Case %d: ",i);
            while(s<T-1)
            {
                printf("%I64d+",p);
                p+=2;
                s++;
            }
            printf("%I64d\n",p);
        }
    }
    return 0;
}
