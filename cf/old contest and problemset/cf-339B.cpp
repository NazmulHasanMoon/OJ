#include<bits/stdc++.h>
using namespace std;
#define sz 1000000
int a[sz];
int main()
{
    long long n,m,s(0),b(1);
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]<b)
            s+=n-b+a[i];
        else
            s+=a[i]-b;
        b=a[i];
    }
    cout<<s<<endl;
    return 0;
}
