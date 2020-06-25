#include<bits/stdc++.h>
using namespace std;
#define sz 1000
int a[sz],mp[sz];
int main()
{
    int n,k,s(0),j(0),d(0);

    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0&&a[i-1]>8)
            a[i]+=(a[i-1]-8);
        if(a[i]>8)
            s+=8;
        else
            s+=a[i];
        mp[i]=s;
        //cout<<mp[i]<<' ';
    }
    for(int i=0;i<n;i++)
    {
        if(mp[i]>=k){
            j=i+1;
            break;
        }
    }
    if(j)
        cout<<j<<endl;
    else
        cout<<"-1\n";
    return 0;
}
