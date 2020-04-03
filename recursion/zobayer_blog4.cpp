#include<bits/stdc++.h>
using namespace std;
void rec(int i,int n)
{
    if(i==0)
        return;
    rec(i-1,n);
    if(i==1)
        cout<<"1";
    else
        cout<<"+x";
    if(i>2)
        cout<<"^"<<i-1;
}
int main()
{
    int n;
    cin>>n;
    rec(n,n);
    return 0;
}
