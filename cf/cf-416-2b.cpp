#include<bits/stdc++.h>
using namespace std;
#define sz 10005
int a[sz];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];//b[i]=a[i];
    for(int i=0;i<m;i++){
        int l,r,x;
        cin>>l>>r>>x;
        ///sort(a+l-1,a+r);
        int c(0),z=a[x-1];
        for(int j=l-1;j<r;j++){
            if(z>a[j])
                c++;
        }
        if(c==x-l)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        /*for(int j=0;j<n;j++)
            a[j]=b[j];*/
    }
    return 0;
}
