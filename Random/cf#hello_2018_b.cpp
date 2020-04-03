#include<bits/stdc++.h>
using namespace std;
#define sz 10001
#define sf scanf
#define pf printf
#define ss second
#define ff first
int a[sz],b[sz];
map<int,int>mp;
int main()
{
    int n;
    sf("%d",&n);
    n--;
    for(int i=0,j=2; i<n; i++,j++)
    {
        sf("%d",&a[i]);
        mp[a[i]]++;
        b[i]=j;
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        int start=0,x;
        x=b[i];
        int end=n-1;
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(x==a[mid])
            {
                //cout<<x<<"**"<<endl;
                //printf("location = %d search value = %d\n",mid+1,x);
                mp[a[i]]--;
                break;
            }
            else if(x>a[mid])
                start=mid+1;
            else
                end=mid-1;
            mid=(start+end)/2;
        }
    }
    for(auto i:mp)
    {
        //cout<<i.ss<<endl;
        if(i.ss<3)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
