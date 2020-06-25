#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200
int a[sz];
int main()
{
    faster
    int n,c(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    n--;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==1&&a[i]==0&&a[i+1]==1)
            a[i+1]=0,c++;
    }
    cout<<c<<endl;
    return 0;
}
