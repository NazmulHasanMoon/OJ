#include<bits/stdc++.h>
using namespace std;
int C[50][50];
int nCr(int n,int r)
{
    if(r==1)return n;
    if(r==n)return 1;
    if(C[n][r])return C[n][r];
    C[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
    return C[n][r];
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}
