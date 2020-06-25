#include<bits/stdc++.h>
using namespace std;
#define sz 3000
int a[sz],x[sz];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<m;i++)
        scanf("%d",&x[i]);
    int c,s,c1;
    c=c1=0,s=n;
    sort(x,x+m);
    for(int i=0,j=0;i<m&&j<n;i++)
        if(a[j]<=x[i])
            s--,j++;
    //cout<<s<<c<<c1<<endl;
    cout<<s<<endl;
    return 0;
}
