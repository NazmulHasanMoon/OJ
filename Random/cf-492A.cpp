#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i(1);
    cin>>n;
    while(n>0)
        n-=(i*(i+1))/2,i++;
    if(n==0)
        cout<<i-1<<endl;
    else
        cout<<i-2<<endl;
    return 0;
}
