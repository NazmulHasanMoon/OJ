#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define sz 1000
int a[sz],b[sz];
double m[sz];
int main()
{
    int n,x,y,s(0),p,q;
    scanf("%d %d %d",&n,&x,&y);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        p=(x-a[i]);
        if(p)
            m[i]=(y-b[i])/(p+0.0);
        else
            m[i]=100000.0;
    }
    sort(m,m+n);
    for(int i=0;i<n-1;i++){
        if(m[i]!=m[i+1])
            s++;
    }
    cout<<s+1<<endl;
    return 0;
}
