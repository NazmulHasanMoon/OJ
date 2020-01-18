#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100000001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all( x)   x.begin(),x.end()

using namespace std;
#define se 101
int a[se];
int main()
{
    int n,k,mn=INT_MAX;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(k%a[i]==0)
            mn=min(mn,k/a[i]);
    }
    cout<<mn<<endl;
    return 0;
}
