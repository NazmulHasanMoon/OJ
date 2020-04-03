#include<bits/stdc++.h>
using namespace std;
int a[6];
void rec(int i,int n)
{
    if(i==n)return;
    cin>>a[i];
    rec(i+1,n);
    cout<<a[i]<<' ';
}
int main()
{
    int n;
    cin>>n;
    rec(0,n);
    return 0;
}
