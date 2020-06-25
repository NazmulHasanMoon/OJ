#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
vector<int>odd,even;
int main()
{
    faster
    int n,x,p,q;
    ll re(0);
    p=q=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x&1)
             odd.push_back(x),p++;
        else
            even.push_back(x),q++;
    }
    sort(odd.begin(),odd.end(),greater<int>());
    sort(even.begin(),even.end(),greater<int>());
    if(p==q||abs(p-q)==1)
        cout<<"0\n";
    else if(!p)
    {
        //cout<<q<<endl;
        for(int i=1;i<q;i++)
            re+=(ll)even[i];
        cout<<re<<'\n';
    }
    else if(!q)
    {
        for(int i=1;i<p;i++)
            re+=(ll)odd[i];
        cout<<re<<'\n';
    }
    else
    {
        if(p<q)
        {
            for(int i=p+1;i<q;i++)
                re+=(ll)even[i];
        }
        else
        {
            for(int i=q+1;i<p;i++)
                re+=(ll)odd[i];
        }
        cout<<re<<'\n';
    }
    return 0;

}
