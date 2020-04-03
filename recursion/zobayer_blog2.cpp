#include<bits/stdc++.h>
using namespace std;
int a[10];
void rec(int i,int n)
{
    if(i==n)return;
    cin>>a[i];
    rec(i+1,n);
    if(n-i-1<=i)
        cout<<a[n-i-1]<<' '<<a[i]<<'\n';
}
int main()
{
    int n;
    cin>>n;
    rec(0,n);
    return 0;
}
