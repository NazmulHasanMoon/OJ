#include<bits/stdc++.h>
#include<iostream>
#define sz 100
using namespace std;
int x[sz],c[sz];
int main()
{
    int n,j,m=-32;
    scanf("%d",&n);
    for(int i=0,j=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0,k=0;i<n;i++,k++)
    {
        for(j=0;j<n;j++)
            if(x[i]==x[j])
                c[k]++;
        if(m<c[k])
            m=c[k];
    }
    if(((n+1)/2)>=m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
