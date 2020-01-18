#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 101
int a[sz];
int main()
{
    int n,x,y,c,s;
    c=s=x=y=0;
    sf("%d",&n);
    for(int i=0; i<n; i++){
        sf("%d",&a[i]);
        if(a[i]==0){
            c++;
            x=i;
        }
    }
    for(int i=0;i<x;i++)
    {
        if(a[i]==1){
            s++;
            y=i;
        }
    }
    if(x==0)
        s=n;
    cout<<max(c,s+(x-y))<<endl;
    return 0;
}
