#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long r,c,s,x,y;
        scanf("%lld",&x);
        r=(long long)ceil(sqrt(x+0.0));
        y=(long long)pow(r+0.0,2);
        s=y-x;
        if(s<(r+r)/2){
            c=s+1;
            if(!(y%2))
                swap(r,c);
        }
        else{
            c=(r+r)-1-s;
            if(y%2)
                swap(r,c);
        }
        printf("Case %d: %lld %lld\n",i,c,r);
    }

    return 0;
}
