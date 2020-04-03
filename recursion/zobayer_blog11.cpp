#include<bits/stdc++.h>
using namespace std;
int findmax(int i,int *y)
{
    int mx;
    if(i==0)return y[i];
    mx=findmax(i-1,y);
    return max(mx,y[i]);
}
int main()
{
    int x,y[100];
        cin>>x;
    for(int i=0;i<x;i++)cin>>y[i];
    cout<<findmax(x-1,y)<<endl;
    return 0;
}

