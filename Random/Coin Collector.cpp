#include<bits/stdc++.h>
using namespace std;
int c;
long long S;
int withdraw(long long x[],long long s,int n){
    if( s == 1) return c;
    else{
        long long y;
        int i;
        for(i=n-1;i>=0;i--)
        {
            if(x[i]<=s){
                c++;
                if(x[i]==S)
                    c--;
                y=x[i];
                n=i+1;
                break;
            }
        }
        S=y;
        withdraw(x,s-y,n);
    }

}
int main()
{
    int t,n,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        long long x[n],s(0);
        for(int j=0;j<n;j++){
            scanf("%I64d",&x[j]);
            s+=x[j];
        }
        y=withdraw(x,s,n);
        if(S!=1)
            y++;
        printf("%d\n",y);
        c=S=0;
    }
    return 0;
}
