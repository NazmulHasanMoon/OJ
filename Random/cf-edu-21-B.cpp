#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define sz 1000000
long int a[sz];
int main()
{
    int n,k,w(0);
    double s(0.0);
    //cin>>n>>k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i+=k)
    {
        if(i+k<=n){
            w++;
        for(int j=i;j<i+k;j++)
            s+=a[j];//cout<<a[j]<<"j="<<j<<' ';
        }

    }
    //cout<<endl;
    //cout<<w<<' '<<n-k+1<<endl;
    if(w<n-k+1)
    {
        for(int i=n-1; w<n-k+1; i-=k,w++)
        {
            for(int j=i;j>i-k;j--){
                s+=a[j];//cout<<s<<' ';
            }
        }
    }
    //cout<<endl<<s<<endl;
    //cout<<' '<<s/(w+0.0)<<endl;
    double x=s/(w+0.0);
    printf("%.10f\n",x);
   // cout<<x<<endl;
    //printf("%lf\n",x);
    return 0;
}
