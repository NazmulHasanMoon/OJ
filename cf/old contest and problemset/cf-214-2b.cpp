#include<bits/stdc++.h>
using namespace std;
#define sz 100000
int a[sz];
int main()
{
    int n,k,l,s;
    long long mi=1000000000;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<k;i++){
        s=0;
        for(int j=i;j<n;j+=k)
            s+=a[j];
        if(mi>s)
            mi=s,l=i+1;
    }
    cout<<l<<endl;
    return 0;
}
