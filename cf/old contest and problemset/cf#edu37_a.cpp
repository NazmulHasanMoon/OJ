#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
int main()
{
    int t,n,k,x;
    sf("%d",&t);
    while(t--){
        sf("%d %d",&n,&k);
        bool num[n];
        for(int l=0;l<n;l++) num[l]=false;
        int x[n+1],s(1);
        for(int i=0;i<k;i++){
            sf("%d",&x[i]);
         x[i]--;
        }
        bool full=false;
        int i=0;
        for(;;i++){
                int j;
                for( j=0;j<k;j++) {
                        int a1=x[j]-i,a2=x[j]+i;
                        if(a1>=0)
                    num[a1]=true;
                    if(a2<n)
                        num[a2]=true;
                }
          //      for(int q=0;q<n;q++) cout<<num[q]<<' '; cout<<endl;
            for(j=0;j<n;j++){
                if(num[j]==false) { break; }
            }
            if(j==n) break;
        }
        pf("%d\n",i+1);
    }
    return 0;
}
