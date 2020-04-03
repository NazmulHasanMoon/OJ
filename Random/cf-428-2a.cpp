#include<bits/stdc++.h>
using namespace std;
#define sz 1000
int a[sz],mp[sz];
int main()
{
    int n,k;
    long long s(0),j,d(0);
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
            a[i]++;
        s+=a[i];
        //cout<<mp[i]<<' ';
    }
    if(s<=(8*n))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

