#include<bits/stdc++.h>
using namespace std;
#define sz 100003
#define ll long long
int a[sz],b[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x,y,s(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1,j=1; i<=m; i++)
        cin>>b[i];
    int z=min(m,n);
    int i=1,j=1,k=1;
    while(1)
    {
        if(a[j]<b[k])
        {
start:
            while(a[j]<b[k])
                j++,a[j]+=a[j-1];
            //cout<<a[j]<<'?'<<b[k]<<endl;
            while(b[k]<a[j])
                k++,b[k]+=b[k-1];
            //cout<<a[j]<<'*'<<b[k]<<endl;
            if(b[k]!=a[j])
                goto start;
            j++,k++;
            //a[j]-=a[j-1],b[k]-=b[k-1];
            s++;
        }
        else
        {
stt:
            while(b[k]<a[j])
                k++,b[k]+=b[k-1];
            //cout<<a[j]<<'.'<<b[k]<<endl;
            while(a[j]<b[k])
                j++,a[j]+=a[j-1];
            //cout<<a[j]<<'='<<b[k]<<endl;
            if(a[j]!=b[k])
                goto stt;
            k++,j++;
            //b[k]-=b[k-1],a[j]-=a[j-1];
            s++;
        }
        if(j>n||k>m)
            break;
    }
    cout<<s<<endl;
    return 0;
}
