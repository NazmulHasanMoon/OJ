#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 500001
int arr[sz],brr[sz];
int main()
{
    int x,y,z,a,b,c,p,d,j(0);
    cin>>a>>b>>c>>d;
    if(a==b&&b==c&&c==d)
    {
        cout<<"1\n";
        return 0;
    }
    ll s=0;
    for(int i=a;i<=b;i++)
        arr[j++]=i;
    z=d-c+1;
    for(int i=b;i<=c;i++){
        x=c-i+1;
        y=(lower_bound(arr,arr+j,x)-&arr[0]);
        p=i+arr[y]-c;
        y=j-y;
        s+=(ll)p*(ll)y;
        y--;
        if(y>z)
            s+=((ll)z*(ll)(z+1))/2LL,y-=z,s+=((ll)y*(ll)z);
        else
            s+=((ll)y*(ll)(y+1))/2LL;
    }
    cout<<s<<'\n';
    return 0;
}
