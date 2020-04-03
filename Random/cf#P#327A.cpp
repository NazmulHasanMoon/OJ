#include<bits/stdc++.h>
using namespace std;
#define sz 101
int p[sz],a[sz];
int main()
{
    int n,s(0),c=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
        {
            s++;
            a[i]=-1;
        }
        else
            a[i]=1;
    }
    p[0]=a[0];
    c=max(c,p[0]);
    for(int i=1;i<n;i++)
    {
        p[i]=max(a[i]+p[i-1],a[i]);
        c=max(c,p[i]);
    }
    cout<<c+s<<endl;
    return 0;
}
