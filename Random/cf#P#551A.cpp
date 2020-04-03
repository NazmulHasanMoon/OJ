#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,mn,x;
    cin>>a>>b;
    mn=min(a,b);
    x=max(a,b);
    cout<<mn<<' '<<(x-mn)/2<<endl;
    return 0;
}
