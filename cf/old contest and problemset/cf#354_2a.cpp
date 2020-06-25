#include<bits/stdc++.h>
using namespace std;
#define sz 101
int a[sz],mni,mxi;
int main()
{
    int n,re(0),x,y,z;
    cin>>n;
    mni=mxi=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==n)
            mxi=i+1;
        else if(a[i]==1)
            mni=i+1;
    }
    if(mxi<mni)
    {
        re=max(re,mni-1);
        re=max(re,n-mxi);
    }
    else
    {
        re=max(re,mxi-1);
        re=max(re,n-mni);
    }
    cout<<re<<'\n';
    return 0;
}
