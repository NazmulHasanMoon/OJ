#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define sz 1000003
#define ll long long
int a[sz];
int main()
{
    faster
    int n,x,l,z(0);
    int lz,rz;
    string s;
    ll re(0);
    cin>>n>>s;
    int i;
    vector<int>v;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='1')
            v.push_back(i+1),z++;
    }
    if(n>z)
        return cout<<"0\n",0;
    if(!n)
    {
        for(int j=0; j<z; j++)
        {
            if(!j)
                re+=1LL*((ll)v[j]*(ll)(v[j]-1))/2LL;
            else
            {
                x=v[j]-v[j-1];
                re+=1LL*((ll)x*(ll)(x-1)/2LL);
            }
        }
        ///cout<<(i*(i+1))/2<<endl;
        if(!z)
            re=((ll)i*(ll)(i+1))/2LL;
        else if(v[z-1]<i)
        {
            x=i-v[z-1];
            //cout<<x<<endl;
            re+=1LL*((ll)x*(ll)(x+1))/2LL;
        }
    }
    else
    {
        for(int j=0; j<=z-n; j++)
        {
            if(j>0)
                lz=v[j]-v[j-1]-1;
            else
                lz=v[j]-1;
            if(j+n<z)
                rz=v[j+n]-v[j+n-1]-1;
            else
                rz=i-v[z-1];
            re+=1LL*(lz+1)*(rz+1);

        }
    }
    cout<<re<<'\n';
    return 0;
}
