#include<bits/stdc++.h>
using namespace std;

/*void rec(int i,int n)
{
    if(i==n)return;
    cin>>a[i];
    if(a[i]%2==0)
        cout<<a[i]<<' ';
    rec(i+1,n);
        ///cout<<a[n-i-1]<<' '<<a[i]<<'\n';
}*/
void rec(int i,int n,int *a)
{
    if(i==n)return;
    if(a[i]%2==0)
        cout<<a[i]<<' ';
    rec(i+1,n,a);
}
int main()
{
    int n,a[10];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    rec(0,n,a);
    return 0;
}

