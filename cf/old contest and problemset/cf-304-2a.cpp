#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,w,n;
    cin>>k>>w>>n;
    int c;
    c=k*n*(n+1)/2-w;
    if(c>0)
        cout<<c<<endl;
    else
        cout<<"0\n";
    return 0;
}
