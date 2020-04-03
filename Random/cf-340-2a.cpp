#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=(n%5)?1+n/5:n/5;
    cout<<x<<endl;
    return 0;
}
